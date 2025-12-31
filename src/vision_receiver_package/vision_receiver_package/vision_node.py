from __future__ import annotations

import socket
import time
from typing import Callable, Dict, List, Optional, Tuple

import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from rcl_interfaces.msg import SetParametersResult
from interface_package.msg import (
    BallState,
    FieldDimensions,
    Pose2D,
    RobotState,
    TeamColor,
    Twist2D,
    VisionDetection,
    VisionGeometry,
    WorldState,
)
from interface_package.proto import messages_robocup_ssl_wrapper_pb2 as ssl_wrapper_pb2
from .vision_client import VisionClient


MIN_PUBLISH_RATE_HZ = 120.0


def _pick_interface_ip() -> str:
    """
    Melhor esforço pra pegar o IP de uma interface não-loopback.
    Evita o '0.0.0.0' no multicast, que é fonte clássica de pacote intermitente.
    """
    try:
        # pega IP "default route" de forma simples
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.connect(("8.8.8.8", 80))
        ip = s.getsockname()[0]
        s.close()
        if ip and not ip.startswith("127."):
            return ip
    except Exception:
        pass
    return "0.0.0.0"


class VisionReceiver(Node):
    def __init__(self) -> None:
        super().__init__("vision_receiver")

        # params
        self.declare_parameter("bind_address", "0.0.0.0")
        self.declare_parameter("port", 10006)
        self.declare_parameter("multicast", "224.5.23.2")
        self.declare_parameter("interface_address", "")  
        self.declare_parameter("poll_period_s", 0.002)
        self.declare_parameter("merge_timeout_s", 0.03)
        self.declare_parameter("gc_timeout_s", 0.5)
        self.declare_parameter("expected_cameras", 4)

        self.declare_parameter("robot_ttl_s", 0.50)
        self.declare_parameter("ball_ttl_s", 0.35)
        self.declare_parameter("publish_period_s", 1.0 / MIN_PUBLISH_RATE_HZ)
        self.declare_parameter("publish_rate_hz", MIN_PUBLISH_RATE_HZ)

        self.declare_parameter("friendly_color", "yellow")

        self._robot_ttl_s = float(self.get_parameter("robot_ttl_s").value)
        self._ball_ttl_s = float(self.get_parameter("ball_ttl_s").value)
        self._publish_period_s = float(self.get_parameter("publish_period_s").value)

        self._friendly_is_yellow = True
        self._min_publish_rate_hz = MIN_PUBLISH_RATE_HZ
        self._publish_timer = None
        self._last_detection_time: float = 0.0
        self._last_publish_time: float = 0.0
        self._expected_cameras = int(self.get_parameter("expected_cameras").value)
        self._apply_friendly_color(str(self.get_parameter("friendly_color").value))

        bind_address = str(self.get_parameter("bind_address").value)
        port = int(self.get_parameter("port").value)
        multicast = str(self.get_parameter("multicast").value)

        iface_param = str(self.get_parameter("interface_address").value).strip()
        iface_ip = iface_param if iface_param and iface_param != "0.0.0.0" else _pick_interface_ip()

        self.client = VisionClient()
        if not self.client.bind(bind_address, port):
            raise RuntimeError(f"Failed to bind {bind_address}:{port}")

        if not self.client.join_multicast(multicast, iface_ip):
            self.get_logger().warn(f"Failed to join multicast {multicast}:{port} iface={iface_ip}")
        else:
            self.get_logger().info(f"Joined multicast {multicast}:{port} iface={iface_ip}")

        self.add_on_set_parameters_callback(self._on_set_parameters)

        self._field_dimensions = FieldDimensions()
        self._last_capture_t: float = 0.0

        self._robot_cache: Dict[Tuple[str, int], Tuple[RobotState, float]] = {}
        self._ball_cache: Optional[Tuple[BallState, float]] = None

        self._world_pub = self.create_publisher(WorldState, "vision/world_state", 10)
        self._detection_pub = self.create_publisher(VisionDetection, "vision/detection", 10)
        self._geometry_pub = self.create_publisher(VisionGeometry, "vision/geometry", 10)

        self.client.set_packet_callback(self.on_packet)
        self.create_timer(float(self.get_parameter("poll_period_s").value), self.on_timer)
        self._apply_publish_period()

    def _on_set_parameters(self, params):
        rebind = False
        bind_address = str(self.get_parameter("bind_address").value)
        port = int(self.get_parameter("port").value)
        multicast = str(self.get_parameter("multicast").value)
        iface_param = str(self.get_parameter("interface_address").value).strip()
        publish_update = False
        pending_publish_rate: Optional[float] = None
        pending_publish_period: Optional[float] = None

        for param in params:
            if param.name == "friendly_color":
                self._apply_friendly_color(str(param.value))
            elif param.name == "bind_address":
                bind_address = str(param.value)
                rebind = True
            elif param.name == "port":
                port = int(param.value)
                rebind = True
            elif param.name == "multicast":
                multicast = str(param.value)
                rebind = True
            elif param.name == "interface_address":
                iface_param = str(param.value).strip()
                rebind = True
            elif param.name == "poll_period_s":
                # Timer update is complex, ignoring for now
                pass
            elif param.name == "expected_cameras":
                try:
                    self._expected_cameras = int(param.value)
                except (TypeError, ValueError):
                    self.get_logger().warn(f"Invalid expected_cameras value: {param.value}")
            elif param.name == "publish_period_s":
                pending_publish_period = float(param.value)
                publish_update = True
            elif param.name == "publish_rate_hz":
                pending_publish_rate = float(param.value)
                publish_update = True

        if rebind:
            iface_ip = iface_param if iface_param and iface_param != "0.0.0.0" else _pick_interface_ip()
            self.get_logger().info(f"Rebinding to {bind_address}:{port} multicast={multicast}")
            self.client.close()
            if self.client.bind(bind_address, port):
                self.client.join_multicast(multicast, iface_ip)
            else:
                self.get_logger().error(f"Failed to rebind to {bind_address}:{port}")
        if publish_update:
            self._apply_publish_period(
                rate_override=pending_publish_rate,
                period_override=pending_publish_period,
            )

        return SetParametersResult(successful=True)

    def on_timer(self) -> None:
        self.client.poll(ssl_wrapper_pb2.SSL_WrapperPacket)

    def on_packet(self, packet: ssl_wrapper_pb2.SSL_WrapperPacket) -> None:
        if packet.HasField("geometry"):
            self._update_geometry(packet.geometry)

        if packet.HasField("detection"):
            self._consume_detection(packet.detection)

    def _consume_detection(self, det: ssl_wrapper_pb2.SSL_DetectionFrame) -> None:
        now = time.monotonic()
        self._last_capture_t = float(getattr(det, "t_capture", 0.0))
        self._last_detection_time = now

        for r in det.robots_yellow:
            if not r.HasField("robot_id"):
                continue
            state = self._to_robot_state(r)
            self._robot_cache[("yellow", int(r.robot_id))] = (state, now)

        for r in det.robots_blue:
            if not r.HasField("robot_id"):
                continue
            state = self._to_robot_state(r)
            self._robot_cache[("blue", int(r.robot_id))] = (state, now)

        if det.balls:
            best = max(det.balls, key=lambda b: float(getattr(b, "confidence", 0.0)))
            ball_state = self._to_ball_state(best)
            self._ball_cache = (ball_state, now)

        self._publish_detection(now)
        self._publish_world_state()

    def _publish_detection(self, now: Optional[float] = None) -> None:
        if now is None:
            now = time.monotonic()

        detection_msg = VisionDetection()
        detection_msg.stamp = self.get_clock().now().to_msg()
        detection_msg.capture_timestamp = self._last_capture_t

        yellow: List[RobotState] = []
        blue: List[RobotState] = []
        for (team, _rid), (state, t_seen) in list(self._robot_cache.items()):
            if (now - t_seen) > self._robot_ttl_s:
                continue
            state.visible = True
            if team == "yellow":
                yellow.append(state)
            else:
                blue.append(state)

        detection_msg.yellow = sorted(yellow, key=lambda r: r.id)
        detection_msg.blue = sorted(blue, key=lambda r: r.id)

        if self._ball_cache and (now - self._ball_cache[1]) <= self._ball_ttl_s:
            detection_msg.ball = self._ball_cache[0]
        else:
            b = BallState()
            b.visible = False
            b.confidence = 0.0
            detection_msg.ball = b

        self._detection_pub.publish(detection_msg)

    def _publish_world_state(self) -> None:
        now = time.monotonic()

        msg = WorldState()
        msg.stamp = self.get_clock().now().to_msg()
        msg.capture_timestamp = self._last_capture_t
        msg.field = self._field_dimensions

        friendly: List[RobotState] = []
        opponent: List[RobotState] = []

        for (team, _rid), (state, t_seen) in list(self._robot_cache.items()):
            if (now - t_seen) > self._robot_ttl_s:
                continue

            state.visible = True
            if (team == "yellow") == self._friendly_is_yellow:
                friendly.append(state)
            else:
                opponent.append(state)

        msg.friendly = sorted(friendly, key=lambda r: r.id)
        msg.opponent = sorted(opponent, key=lambda r: r.id)

        if self._ball_cache and (now - self._ball_cache[1]) <= self._ball_ttl_s:
            msg.ball = self._ball_cache[0]
        else:
            b = BallState()
            b.visible = False
            b.confidence = 0.0
            msg.ball = b

        msg.friendly_color.value = TeamColor.YELLOW if self._friendly_is_yellow else TeamColor.BLUE
        self._world_pub.publish(msg)
        self._last_publish_time = now

        for k, (_s, t_seen) in list(self._robot_cache.items()):
            if (now - t_seen) > (self._robot_ttl_s * 3.0):
                self._robot_cache.pop(k, None)

    def _to_robot_state(self, det: ssl_wrapper_pb2.SSL_DetectionRobot) -> RobotState:
        pose = Pose2D()
        pose.x = float(det.x) / 1000.0
        pose.y = float(det.y) / 1000.0
        pose.theta = float(det.orientation) if det.HasField("orientation") else 0.0

        twist = Twist2D()
        twist.vx = 0.0
        twist.vy = 0.0
        twist.omega = 0.0

        state = RobotState()
        state.id = int(det.robot_id) if det.HasField("robot_id") else 0
        state.pose = pose
        state.twist = twist
        state.visible = True
        state.confidence = float(getattr(det, "confidence", 0.0))
        return state

    def _to_ball_state(self, det: ssl_wrapper_pb2.SSL_DetectionBall) -> BallState:
        pose = Pose2D()
        pose.x = float(det.x) / 1000.0
        pose.y = float(det.y) / 1000.0
        pose.theta = float(det.z) / 1000.0 if det.HasField("z") else 0.0

        ball = BallState()
        ball.pose = pose
        ball.visible = True
        ball.confidence = float(getattr(det, "confidence", 0.0))
        return ball

    def _update_geometry(self, geo: ssl_wrapper_pb2.SSL_GeometryData) -> None:
        if not geo.HasField("field"):
            return
        f = geo.field
        dims = FieldDimensions()
        dims.length = float(getattr(f, "field_length", 0.0)) / 1000.0
        dims.width = float(getattr(f, "field_width", 0.0)) / 1000.0
        dims.goal_width = float(getattr(f, "goal_width", 0.0)) / 1000.0
        dims.goal_depth = float(getattr(f, "goal_depth", 0.0)) / 1000.0
        dims.boundary_width = float(getattr(f, "boundary_width", 0.0)) / 1000.0
        self._field_dimensions = dims

        geom_msg = VisionGeometry()
        geom_msg.stamp = self.get_clock().now().to_msg()
        geom_msg.field = dims
        calibs = getattr(geo, "calib", [])
        camera_ids: List[int] = []
        for calib in calibs:
            try:
                identifier = int(getattr(calib, "camera_id", 0))
            except (TypeError, ValueError):
                continue
            camera_ids.append(identifier)
        geom_msg.camera_ids = camera_ids
        geom_msg.camera_count = len(camera_ids)
        geom_msg.expected_cameras = max(int(self._expected_cameras), 0)
        self._geometry_pub.publish(geom_msg)

    def _apply_friendly_color(self, color: str) -> None:
        normalized = str(color).strip().lower()
        self._friendly_is_yellow = (normalized != "blue")

    def _compute_publish_period(
        self, rate_hz: Optional[float], legacy_period: Optional[float]
    ) -> float:
        min_period = 1.0 / self._min_publish_rate_hz
        candidates = [min_period]
        if rate_hz is not None:
            try:
                rate = float(rate_hz)
            except (TypeError, ValueError):
                rate = 0.0
            if rate > 0.0:
                candidates.append(1.0 / rate)
        if legacy_period is not None:
            try:
                period = float(legacy_period)
            except (TypeError, ValueError):
                period = 0.0
            if period > 0.0:
                candidates.append(period)
        resolved = min(candidates)
        return max(resolved, 1e-4)

    def _apply_publish_period(
        self,
        rate_override: Optional[float] = None,
        period_override: Optional[float] = None,
    ) -> None:
        rate_value = rate_override
        if rate_value is None:
            rate_value = float(self.get_parameter("publish_rate_hz").value)
        period_value = period_override
        if period_value is None:
            period_value = float(self.get_parameter("publish_period_s").value)
        new_period = self._compute_publish_period(rate_value, period_value)
        if self._publish_timer is not None:
            self._publish_timer.cancel()
        self._publish_period_s = new_period
        self._publish_timer = self.create_timer(new_period, self._on_publish_timer)
        effective_rate = 1.0 / new_period if new_period > 0.0 else 0.0
        self.get_logger().info(
            f"World state publish period set to {new_period * 1000.0:.2f} ms (~{effective_rate:.1f} Hz)"
        )

    def _on_publish_timer(self) -> None:
        now = time.monotonic()
        if self._last_detection_time > 0.0 and (now - self._last_detection_time) < self._publish_period_s:
            return
        if self._last_publish_time > 0.0 and (now - self._last_publish_time) < self._publish_period_s:
            return
        self._publish_world_state()


def main() -> None:
    rclpy.init()
    node = VisionReceiver()
    try:
        executor = MultiThreadedExecutor()
        executor.add_node(node)
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
