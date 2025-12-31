from __future__ import annotations

import socket
from typing import Optional

from interface_package.msg import ControlCommand, Twist2D
from interface_package.proto import ssl_simulation_robot_control_pb2 as control_pb2


class ControlClient:
    """Thin UDP client for the SSL simulation RobotControl protobuf."""

    def __init__(self) -> None:
        self._sock: Optional[socket.socket] = None
        self._destination: Optional[tuple[str, int]] = None

    def close(self) -> None:
        if self._sock is not None:
            self._sock.close()
            self._sock = None
        self._destination = None

    def connect(self, host: str, port: int) -> bool:
        self.close()
        try:
            sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            sock.setblocking(False)
            sock.connect((host, port))
        except OSError:
            self.close()
            return False
        self._sock = sock
        self._destination = (host, port)
        return True

    def send_packet(self, control: control_pb2.RobotControl) -> bool:
        if self._sock is None or self._destination is None:
            return False
        try:
            payload = control.SerializeToString()
            sent = self._sock.send(payload)
        except OSError:
            return False
        return sent == len(payload)

    def send_command(self, robot_id: int, command: ControlCommand) -> bool:
        control = control_pb2.RobotControl()
        proto_cmd = control.robot_commands.add()
        proto_cmd.id = int(robot_id)

        if command.has_velocity:
            self._fill_velocity(proto_cmd, command.velocity)

        if command.kick:
            proto_cmd.kick_speed = float(command.kick_speed)
            proto_cmd.kick_angle = 0.0

        if command.dribbler:
            proto_cmd.dribbler_speed = float(command.dribbler_rpm)

        return self.send_packet(control)

    def send_velocity_command(self, robot_id: int, vx: float, vy: float, omega: float) -> bool:
        cmd = ControlCommand()
        cmd.has_velocity = True
        cmd.velocity = Twist2D(x=vx, y=vy, theta=omega)
        return self.send_command(robot_id, cmd)

    def _fill_velocity(self, proto_cmd, twist: Twist2D) -> None:
        global_vel = proto_cmd.move_command.global_velocity
        vx = getattr(twist, "vx", getattr(twist, "x", 0.0))
        vy = getattr(twist, "vy", getattr(twist, "y", 0.0))
        omega = getattr(twist, "omega", getattr(twist, "theta", 0.0))
        global_vel.x = float(vx)
        global_vel.y = float(vy)
        global_vel.angular = float(omega)
