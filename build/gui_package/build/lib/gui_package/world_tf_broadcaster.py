from __future__ import annotations

import math
import time
from dataclasses import dataclass

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Point, TransformStamped
from tf2_ros import TransformBroadcaster, StaticTransformBroadcaster

from interface_package.msg import TeamColor, WorldState
from visualization_msgs.msg import Marker


DEFAULT_CENTER_CIRCLE = 0.5  # m


def yaw_to_quaternion(yaw: float) -> tuple[float, float, float, float]:
    half = 0.5 * yaw
    return (0.0, 0.0, math.sin(half), math.cos(half))


@dataclass(frozen=True)
class FieldKey:
    length: float
    width: float
    boundary_width: float
    goal_width: float
    goal_depth: float
    penalty_depth: float
    penalty_width: float


class WorldTFBroadcaster(Node):
    def __init__(self) -> None:
        super().__init__("world_tf_broadcaster")

        # ---- inputs/frames
        self.declare_parameter("world_topic", "vision/world_state")

        # Fixed/global frame (RViz fixed frame)
        self.declare_parameter("fixed_frame", "map")
        # Frame do sensor/SSL-Vision (onde chegam as poses do WorldState)
        self.declare_parameter("sensor_frame", "vision")

        # publica um TF estático fixed_frame -> sensor_frame
        self.declare_parameter("publish_static_tf", True)
        self.declare_parameter("static_tf_x", 0.0)
        self.declare_parameter("static_tf_y", 0.0)
        self.declare_parameter("static_tf_yaw", 0.0)

        # ---- TF robots/ball
        self.declare_parameter("publish_ball", True)
        self.declare_parameter("publish_robots", True)
        self.declare_parameter("blue_prefix", "blue_")
        self.declare_parameter("yellow_prefix", "yellow_")

        # ---- markers do campo
        self.declare_parameter("field_line_width", 0.01)          # m
        self.declare_parameter("field_publish_period_s", 1.0)     # s (anti-flood)
        self.declare_parameter("draw_center_circle", True)
        self.declare_parameter("center_circle_radius", DEFAULT_CENTER_CIRCLE)
        self.declare_parameter("field_marker_topic", "vision/field_marker")
        self.declare_parameter("center_circle_topic", "vision/field_center_circle")
        self.declare_parameter("boundary_marker_topic", "vision/field_boundary")

        # ---- params
        self._world_topic = str(self.get_parameter("world_topic").value)
        self._fixed_frame = str(self.get_parameter("fixed_frame").value)
        self._sensor_frame = str(self.get_parameter("sensor_frame").value)

        self._publish_static_tf = bool(self.get_parameter("publish_static_tf").value)
        self._static_tf_x = float(self.get_parameter("static_tf_x").value)
        self._static_tf_y = float(self.get_parameter("static_tf_y").value)
        self._static_tf_yaw = float(self.get_parameter("static_tf_yaw").value)

        self._publish_ball = bool(self.get_parameter("publish_ball").value)
        self._publish_robots = bool(self.get_parameter("publish_robots").value)
        self._blue_prefix = str(self.get_parameter("blue_prefix").value)
        self._yellow_prefix = str(self.get_parameter("yellow_prefix").value)

        self._field_line_width = float(self.get_parameter("field_line_width").value)
        self._field_publish_period_s = float(self.get_parameter("field_publish_period_s").value)
        self._draw_center_circle = bool(self.get_parameter("draw_center_circle").value)
        self._center_circle_radius = float(self.get_parameter("center_circle_radius").value)
        self._field_marker_topic = self._validated_topic("field_marker_topic")
        self._circle_topic = self._validated_topic("center_circle_topic")
        self._boundary_topic = self._validated_topic("boundary_marker_topic")

        # ---- TF broadcasters
        self._tf_br = TransformBroadcaster(self)
        self._static_br = StaticTransformBroadcaster(self)

        # publica o TF estático (map->vision) uma vez
        if self._publish_static_tf:
            self._publish_static_map_to_vision()

        # ---- ROS I/O
        self._sub = self.create_subscription(WorldState, self._world_topic, self._on_world, 10)

        # markers no sensor_frame (vision). RViz vai converter pra map via TF estático.
        self._field_marker_pub = self.create_publisher(Marker, self._field_marker_topic, 1)
        self._circle_marker_pub = self.create_publisher(Marker, self._circle_topic, 1)
        self._boundary_marker_pub = self.create_publisher(Marker, self._boundary_topic, 1)

        self._last_field_key: FieldKey | None = None
        self._last_field_pub_t = 0.0

        self.get_logger().info(
            f"Fixed frame='{self._fixed_frame}', sensor frame='{self._sensor_frame}', topic='{self._world_topic}'"
        )
        if self._publish_static_tf:
            self.get_logger().info(
                f"Static TF {self._fixed_frame}->{self._sensor_frame}: "
                f"x={self._static_tf_x:.3f} y={self._static_tf_y:.3f} yaw={self._static_tf_yaw:.3f}"
            )

    # ---------------- TF static

    def _publish_static_map_to_vision(self) -> None:
        tf = TransformStamped()
        tf.header.stamp = self.get_clock().now().to_msg()
        tf.header.frame_id = self._fixed_frame
        tf.child_frame_id = self._sensor_frame

        tf.transform.translation.x = float(self._static_tf_x)
        tf.transform.translation.y = float(self._static_tf_y)
        tf.transform.translation.z = 0.0

        qx, qy, qz, qw = yaw_to_quaternion(float(self._static_tf_yaw))
        tf.transform.rotation.x = qx
        tf.transform.rotation.y = qy
        tf.transform.rotation.z = qz
        tf.transform.rotation.w = qw

        self._static_br.sendTransform(tf)

    # ---------------- callback

    def _on_world(self, msg: WorldState) -> None:
        stamp = msg.stamp

        # campo/markers
        self._maybe_publish_field(msg.field, stamp)

        # quem é friendly?
        friendly_is_yellow = (msg.friendly_color.value == TeamColor.YELLOW)
        friendly_prefix = self._yellow_prefix if friendly_is_yellow else self._blue_prefix
        opponent_prefix = self._blue_prefix if friendly_is_yellow else self._yellow_prefix

        # ball tf (no frame do sensor)
        if self._publish_ball and msg.ball.visible:
            self._send_tf(
                parent=self._sensor_frame,
                child="ball",
                x=msg.ball.pose.x,
                y=msg.ball.pose.y,
                yaw=0.0,
                stamp=stamp,
            )

        # robots tf (no frame do sensor)
        if self._publish_robots:
            for robot in msg.friendly:
                if not robot.visible:
                    continue
                self._send_tf(
                    parent=self._sensor_frame,
                    child=f"{friendly_prefix}{int(robot.id)}",
                    x=robot.pose.x,
                    y=robot.pose.y,
                    yaw=robot.pose.theta,
                    stamp=stamp,
                )

            for robot in msg.opponent:
                if not robot.visible:
                    continue
                self._send_tf(
                    parent=self._sensor_frame,
                    child=f"{opponent_prefix}{int(robot.id)}",
                    x=robot.pose.x,
                    y=robot.pose.y,
                    yaw=robot.pose.theta,
                    stamp=stamp,
                )

    def _send_tf(self, parent: str, child: str, x: float, y: float, yaw: float, stamp) -> None:
        tf = TransformStamped()
        tf.header.stamp = stamp
        tf.header.frame_id = parent
        tf.child_frame_id = child

        tf.transform.translation.x = float(x)
        tf.transform.translation.y = float(y)
        tf.transform.translation.z = 0.0

        qx, qy, qz, qw = yaw_to_quaternion(float(yaw))
        tf.transform.rotation.x = qx
        tf.transform.rotation.y = qy
        tf.transform.rotation.z = qz
        tf.transform.rotation.w = qw

        self._tf_br.sendTransform(tf)

    # ---------------- field markers

    def _maybe_publish_field(self, field, stamp) -> None:
        if field.length <= 0.0 or field.width <= 0.0:
            return

        key = FieldKey(
            length=float(field.length),
            width=float(field.width),
            boundary_width=float(getattr(field, "boundary_width", 0.0)),
            goal_width=float(getattr(field, "goal_width", 0.0)),
            goal_depth=float(getattr(field, "goal_depth", 0.0)),
            penalty_depth=float(getattr(field, "penalty_area_depth", 0.0)),
            penalty_width=float(getattr(field, "penalty_area_width", 0.0)),
        )

        now = time.monotonic()
        if self._last_field_key == key and (now - self._last_field_pub_t) < self._field_publish_period_s:
            return

        self._last_field_key = key
        self._last_field_pub_t = now

        self._publish_boundary_marker(key, stamp)
        self._publish_field_lines_marker(key, stamp)
        if self._draw_center_circle and self._center_circle_radius > 0.0:
            self._publish_center_circle(stamp, self._center_circle_radius)

    def _mk_base_marker(self, stamp, ns: str, mid: int, mtype: int) -> Marker:
        m = Marker()
        m.header.frame_id = self._sensor_frame  # markers no frame do sensor
        m.header.stamp = stamp
        m.ns = ns
        m.id = mid
        m.type = mtype
        m.action = Marker.ADD
        m.pose.orientation.w = 1.0
        m.scale.x = max(self._field_line_width, 1e-3)

        # branco
        m.color.a = 1.0
        m.color.r = 1.0
        m.color.g = 1.0
        m.color.b = 1.0
        return m

    def _publish_boundary_marker(self, fk: FieldKey, stamp) -> None:
        bw = fk.boundary_width
        if bw <= 0.0:
            return

        m = self._mk_base_marker(stamp, ns="field", mid=10, mtype=Marker.LINE_LIST)

        # verde escuro (só pra diferenciar)
        m.color.r = 0.2
        m.color.g = 0.7
        m.color.b = 0.2
        m.color.a = 0.7

        half_L = fk.length / 2.0
        half_W = fk.width / 2.0
        outer_L = half_L + bw
        outer_W = half_W + bw

        corners = [
            (-outer_L, -outer_W),
            (outer_L, -outer_W),
            (outer_L, outer_W),
            (-outer_L, outer_W),
        ]

        def add_line(p1, p2):
            m.points.append(Point(x=float(p1[0]), y=float(p1[1]), z=0.0))
            m.points.append(Point(x=float(p2[0]), y=float(p2[1]), z=0.0))

        for i in range(4):
            add_line(corners[i], corners[(i + 1) % 4])

        self._boundary_marker_pub.publish(m)

    def _publish_field_lines_marker(self, fk: FieldKey, stamp) -> None:
        m = self._mk_base_marker(stamp, ns="field", mid=0, mtype=Marker.LINE_LIST)

        half_L = fk.length / 2.0
        half_W = fk.width / 2.0

        def add_line(p1, p2):
            m.points.append(Point(x=float(p1[0]), y=float(p1[1]), z=0.0))
            m.points.append(Point(x=float(p2[0]), y=float(p2[1]), z=0.0))

        # retângulo do campo
        corners = [
            (-half_L, -half_W),
            (half_L, -half_W),
            (half_L, half_W),
            (-half_L, half_W),
        ]
        for i in range(4):
            add_line(corners[i], corners[(i + 1) % 4])

        # linha do meio
        add_line((0.0, -half_W), (0.0, half_W))

        # gols
        goal_half = fk.goal_width / 2.0
        goal_depth = fk.goal_depth
        if goal_depth > 0.0 and goal_half > 0.0:
            # esquerdo (-X)
            add_line((-half_L, -goal_half), (-half_L - goal_depth, -goal_half))
            add_line((-half_L - goal_depth, -goal_half), (-half_L - goal_depth, goal_half))
            add_line((-half_L - goal_depth, goal_half), (-half_L, goal_half))
            # direito (+X)
            add_line((half_L, -goal_half), (half_L + goal_depth, -goal_half))
            add_line((half_L + goal_depth, -goal_half), (half_L + goal_depth, goal_half))
            add_line((half_L + goal_depth, goal_half), (half_L, goal_half))

        # áreas de pênalti
        if fk.penalty_depth > 0.0 and fk.penalty_width > 0.0:
            ph = fk.penalty_width / 2.0
            pd = fk.penalty_depth

            # esquerda: x in [-half_L, -half_L+pd]
            add_line((-half_L, -ph), (-half_L + pd, -ph))
            add_line((-half_L + pd, -ph), (-half_L + pd, ph))
            add_line((-half_L + pd, ph), (-half_L, ph))

            # direita: x in [half_L-pd, half_L]
            add_line((half_L, -ph), (half_L - pd, -ph))
            add_line((half_L - pd, -ph), (half_L - pd, ph))
            add_line((half_L - pd, ph), (half_L, ph))

        self._field_marker_pub.publish(m)

    def _publish_center_circle(self, stamp, radius: float) -> None:
        m = self._mk_base_marker(stamp, ns="field", mid=1, mtype=Marker.LINE_STRIP)

        steps = 64
        for i in range(steps + 1):
            ang = 2.0 * math.pi * (i / steps)
            m.points.append(Point(x=radius * math.cos(ang), y=radius * math.sin(ang), z=0.0))

        self._circle_marker_pub.publish(m)

    def _validated_topic(self, name: str) -> str:
        topic = str(self.get_parameter(name).value).strip()
        if not topic:
            raise ValueError(f"Parameter '{name}' must not be empty")
        return topic


def main() -> None:
    rclpy.init()
    node = WorldTFBroadcaster()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
