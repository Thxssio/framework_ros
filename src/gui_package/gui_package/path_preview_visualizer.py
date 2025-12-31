from __future__ import annotations

from typing import Dict, List

import rclpy
from geometry_msgs.msg import Point
from rclpy.node import Node
from std_msgs.msg import ColorRGBA
from visualization_msgs.msg import Marker, MarkerArray

from interface_package.msg import PathPreview


def _make_color(r: float, g: float, b: float, a: float = 1.0) -> ColorRGBA:
    color = ColorRGBA()
    color.r = float(r)
    color.g = float(g)
    color.b = float(b)
    color.a = float(a)
    return color


class PathPreviewVisualizer(Node):
    def __init__(self) -> None:
        super().__init__("path_preview_visualizer")
        path_topic = self.declare_parameter("path_preview_topic", "navigation/path_preview").value
        marker_topic = self.declare_parameter(
            "marker_topic", "navigation/path_preview_markers"
        ).value
        self._frame_id = str(self.declare_parameter("frame_id", "map").value)
        self._line_width = float(self.declare_parameter("line_width", 0.02).value)
        self._direct_line_width = float(
            self.declare_parameter("direct_line_width", 0.01).value
        )
        self._marker_ns = str(self.declare_parameter("marker_namespace", "path_preview").value)

        self._path_active: Dict[int, bool] = {}
        self._direct_active: Dict[int, bool] = {}

        self._publisher = self.create_publisher(MarkerArray, marker_topic, 10)
        self._subscription = self.create_subscription(
            PathPreview, path_topic, self._on_preview, 10
        )
        self.get_logger().info(
            f"Publishing RViz markers for '{path_topic}' to '{marker_topic}' (frame={self._frame_id})."
        )

    def _on_preview(self, msg: PathPreview) -> None:
        markers: List[Marker] = []
        stamp = self.get_clock().now().to_msg()
        robot_id = int(getattr(msg, "robot_id", 0))

        path_points = self._convert_points(getattr(msg, "path", []))
        direct_points = self._convert_points(getattr(msg, "direct", []))

        markers.extend(
            self._build_markers_for_series(
                robot_id,
                suffix=0,
                points=path_points,
                color=_make_color(0.1, 0.8, 1.0, 0.9),
                scale=self._line_width,
                label="planned",
                cache=self._path_active,
                stamp=stamp,
            )
        )
        markers.extend(
            self._build_markers_for_series(
                robot_id,
                suffix=1,
                points=direct_points,
                color=_make_color(1.0, 0.4, 0.3, 0.7),
                scale=self._direct_line_width,
                label="direct",
                cache=self._direct_active,
                stamp=stamp,
            )
        )

        if markers:
            self._publisher.publish(MarkerArray(markers=markers))

    def _build_markers_for_series(
        self,
        robot_id: int,
        suffix: int,
        points: List[Point],
        color: ColorRGBA,
        scale: float,
        label: str,
        cache: Dict[int, bool],
        stamp,
    ) -> List[Marker]:
        marker_id = robot_id * 10 + suffix
        markers: List[Marker] = []
        if len(points) >= 2:
            marker = Marker()
            marker.header.frame_id = self._frame_id
            marker.header.stamp = stamp
            marker.ns = f"{self._marker_ns}_{label}"
            marker.id = marker_id
            marker.type = Marker.LINE_STRIP
            marker.action = Marker.ADD
            marker.pose.orientation.w = 1.0
            marker.scale.x = scale
            marker.color = color
            marker.points = points
            markers.append(marker)
            cache[robot_id] = True
        else:
            if cache.get(robot_id):
                marker = Marker()
                marker.header.frame_id = self._frame_id
                marker.header.stamp = stamp
                marker.ns = f"{self._marker_ns}_{label}"
                marker.id = marker_id
                marker.action = Marker.DELETE
                markers.append(marker)
                cache.pop(robot_id, None)
        return markers

    def _convert_points(self, poses) -> List[Point]:
        result: List[Point] = []
        for pose in poses:
            try:
                px = float(getattr(pose, "x", 0.0))
                py = float(getattr(pose, "y", 0.0))
            except (TypeError, ValueError):
                continue
            pt = Point()
            pt.x = px
            pt.y = py
            pt.z = 0.0
            result.append(pt)
        return result


def main() -> None:  # pragma: no cover
    rclpy.init()
    node = PathPreviewVisualizer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":  # pragma: no cover
    main()
