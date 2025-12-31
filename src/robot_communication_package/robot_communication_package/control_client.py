from __future__ import annotations

import socket
from typing import Optional

from interface_package.msg import ControlCommand, Twist2D
from interface_package.proto import ssl_simulation_robot_control_pb2 as control_pb2
from interface_package.proto import grSim_Packet_pb2 as grsim_packet_pb2


class ControlClient:
    """Thin UDP client for the SSL simulation RobotControl protobuf."""

    def __init__(self) -> None:
        self._sock: Optional[socket.socket] = None
        self._destination: Optional[tuple[str, int]] = None
        self._replacement_sock: Optional[socket.socket] = None
        self._replacement_destination: Optional[tuple[str, int]] = None

    def close(self) -> None:
        if self._replacement_sock is not None and self._replacement_sock is not self._sock:
            self._replacement_sock.close()
        if self._sock is not None:
            self._sock.close()
            self._sock = None
        self._replacement_sock = None
        self._destination = None
        self._replacement_destination = None

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

    def configure_replacement(self, host: str, port: int) -> bool:
        host = str(host or "").strip()
        port = int(port)
        if not host or port <= 0:
            if self._replacement_sock is not None and self._replacement_sock is not self._sock:
                self._replacement_sock.close()
            self._replacement_sock = None
            self._replacement_destination = None
            return False
        if (
            self._destination is not None
            and host == self._destination[0]
            and port == self._destination[1]
        ):
            # Share the main socket if targeting the same endpoint.
            self._replacement_sock = self._sock
            self._replacement_destination = self._destination
            return True
        if self._replacement_sock is not None and self._replacement_sock is not self._sock:
            self._replacement_sock.close()
        try:
            sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            sock.setblocking(False)
            sock.connect((host, port))
        except OSError:
            self._replacement_sock = None
            self._replacement_destination = None
            return False
        self._replacement_sock = sock
        self._replacement_destination = (host, port)
        return True

    def _send_message(self, message, sock: Optional[socket.socket] = None) -> bool:
        target = sock or self._sock
        if target is None:
            return False
        try:
            payload = message.SerializeToString()
            sent = target.send(payload)
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

        return self._send_message(control)

    def send_velocity_command(self, robot_id: int, vx: float, vy: float, omega: float) -> bool:
        cmd = ControlCommand()
        cmd.has_velocity = True
        cmd.velocity = Twist2D(x=vx, y=vy, theta=omega)
        return self.send_command(robot_id, cmd)

    def send_replacement_ball(self, x: float, y: float, vx: float = 0.0, vy: float = 0.0) -> bool:
        packet = grsim_packet_pb2.grSim_Packet()
        ball = packet.replacement.ball
        ball.x = float(x)
        ball.y = float(y)
        ball.vx = float(vx)
        ball.vy = float(vy)
        target_sock = self._replacement_sock or self._sock
        return self._send_message(packet, target_sock)

    def send_replacement_robot(
        self,
        robot_id: int,
        is_yellow: bool,
        x: float,
        y: float,
        theta: float,
        present: bool = True,
    ) -> bool:
        packet = grsim_packet_pb2.grSim_Packet()
        robot = packet.replacement.robots.add()
        robot.id = int(robot_id)
        robot.yellowteam = bool(is_yellow)
        robot.turnon = bool(present)
        robot.x = float(x)
        robot.y = float(y)
        robot.dir = float(theta)
        target_sock = self._replacement_sock or self._sock
        return self._send_message(packet, target_sock)

    def _fill_velocity(self, proto_cmd, twist: Twist2D) -> None:
        global_vel = proto_cmd.move_command.global_velocity
        vx = getattr(twist, "vx", getattr(twist, "x", 0.0))
        vy = getattr(twist, "vy", getattr(twist, "y", 0.0))
        omega = getattr(twist, "omega", getattr(twist, "theta", 0.0))
        global_vel.x = float(vx)
        global_vel.y = float(vy)
        global_vel.angular = float(omega)
