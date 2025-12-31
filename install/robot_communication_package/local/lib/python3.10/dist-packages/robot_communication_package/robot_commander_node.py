#!/usr/bin/env python3

from __future__ import annotations

import copy
import time

import rclpy
from rclpy.node import Node

from rclpy.executors import MultiThreadedExecutor
from rcl_interfaces.msg import SetParametersResult

from interface_package.msg import ControlCommand
from interface_package.srv import SendRobotCommand
from .control_client import ControlClient


class RobotCommander(Node):
    def __init__(self) -> None:
        super().__init__("robot_commander")
        self.declare_parameter("host", "127.0.0.1")
        self.declare_parameter("port", 10302)
        self.declare_parameter("repeat_rate_hz", 60.0)
        self.declare_parameter("hold_time_s", 0.25)

        host = str(self.get_parameter("host").value)
        port = int(self.get_parameter("port").value)

        self._hold_time = float(self.get_parameter("hold_time_s").value)
        self._repeat_rate = float(self.get_parameter("repeat_rate_hz").value)
        if self._repeat_rate < 0.0:
            self._repeat_rate = 0.0

        self._client = ControlClient()
        if not self._client.connect(host, port):
            raise RuntimeError(f"Failed to connect UDP socket to {host}:{port}")
        self.get_logger().info(f"Sending robot commands to {host}:{port}")

        self.add_on_set_parameters_callback(self._on_set_parameters)

        service_name = "~/send_robot_command"
        self._service = self.create_service(
            SendRobotCommand, service_name, self._handle_send_command
        )
        resolved = self.resolve_service_name(service_name)
        self.get_logger().info(f"Robot command service available at {resolved}")

        self._active_commands: dict[int, tuple[ControlCommand, float]] = {}
        self._repeat_timer = None
        if self._repeat_rate > 0.0:
            period = max(1.0 / self._repeat_rate, 1e-3)
            self._repeat_timer = self.create_timer(period, self._on_repeat_timer)
            self.get_logger().info(
                f"Repeating commands every {period:.3f}s for {self._hold_time:.2f}s."
            )
        else:
            self.get_logger().info("Command repetition disabled (repeat_rate_hz <= 0).")

    def _on_set_parameters(self, params):
        reconnect = False
        host = str(self.get_parameter("host").value)
        port = int(self.get_parameter("port").value)

        for param in params:
            if param.name == "host":
                host = str(param.value)
                reconnect = True
            elif param.name == "port":
                port = int(param.value)
                reconnect = True
            elif param.name == "hold_time_s":
                self._hold_time = float(param.value)
            elif param.name == "repeat_rate_hz":
                # Changing repeat rate at runtime is complex due to timer, ignoring for now or just logging
                self.get_logger().warn("Changing repeat_rate_hz at runtime is not fully supported yet.")

        if reconnect:
            self.get_logger().info(f"Reconnecting to {host}:{port}...")
            if self._client.connect(host, port):
                self.get_logger().info(f"Reconnected to {host}:{port}")
            else:
                self.get_logger().error(f"Failed to reconnect to {host}:{port}")

        return SetParametersResult(successful=True)

    def _handle_send_command(
        self, request: SendRobotCommand.Request, response: SendRobotCommand.Response
    ) -> SendRobotCommand.Response:
        ok = self._client.send_command(request.robot_id, request.command)
        response.ok = ok
        response.message = "sent" if ok else "failed"
        if not ok:
            self.get_logger().error(
                f"Failed to send command for robot {request.robot_id}"
            )
        else:
            expiry = time.monotonic() + self._hold_time
            self._active_commands[request.robot_id] = (
                copy.deepcopy(request.command),
                expiry,
            )
        return response

    def _on_repeat_timer(self) -> None:
        if not self._active_commands:
            return
        now = time.monotonic()
        expired = [rid for rid, (_, expiry) in self._active_commands.items() if expiry < now]
        for rid in expired:
            self._active_commands.pop(rid, None)
        for robot_id, (command, _) in self._active_commands.items():
            ok = self._client.send_command(robot_id, command)
            if not ok:
                self.get_logger().warn(f"Repeat send failed for robot {robot_id}")


def main() -> None:
    rclpy.init()
    node = RobotCommander()
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
