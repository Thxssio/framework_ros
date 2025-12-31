from __future__ import annotations

import socket
from typing import Callable, Optional


class VisionClient:
    """
    Fiel ao C++:
      - bind(address, port): UDP, SO_REUSEADDR, bind (INADDR_ANY se 0.0.0.0/vazio), non-blocking
      - poll(packet_type): recv(MSG_DONTWAIT) até esvaziar, ParseFromString, callback(packet)
      - join_multicast(multicast_address, interface_address): IP_ADD_MEMBERSHIP (INADDR_ANY se 0.0.0.0/vazio)
      - set_packet_callback(cb)
    """

    def __init__(self) -> None:
        self._sock: Optional[socket.socket] = None
        self._callback: Optional[Callable[[object], None]] = None

    def close(self) -> None:
        if self._sock is not None:
            try:
                self._sock.close()
            finally:
                self._sock = None

    def bind(self, address: str, port: int) -> bool:
        # fecha se já existia (igual C++)
        self.close()

        try:
            sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM, 0)
        except OSError:
            return False

        try:
            sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)

            bind_addr = "0.0.0.0" if (not address or address == "0.0.0.0") else address
            sock.bind((bind_addr, int(port)))

            sock.setblocking(False)

            self._sock = sock
            return True
        except OSError:
            try:
                sock.close()
            except Exception:
                pass
            return False

    def set_packet_callback(self, callback: Callable[[object], None]) -> None:
        self._callback = callback

    def poll(self, packet_type) -> None:
        if self._sock is None or self._callback is None:
            return

        while True:
            try:
                # equivalente ao recv(..., MSG_DONTWAIT)
                data = self._sock.recv(65535, socket.MSG_DONTWAIT)
            except BlockingIOError:
                break
            except OSError:
                break

            try:
                packet = packet_type()
                packet.ParseFromString(data)
            except Exception:
                continue

            self._callback(packet)

    def join_multicast(self, multicast_address: str, interface_address: str = "0.0.0.0") -> bool:
        if self._sock is None:
            return False

        try:
            mcast = socket.inet_aton(multicast_address)

            # INADDR_ANY se vazio/0.0.0.0, igual C++
            iface_ip = "0.0.0.0" if (not interface_address or interface_address == "0.0.0.0") else interface_address
            iface = socket.inet_aton(iface_ip)

            # ip_mreq = (multiaddr, interface)
            mreq = mcast + iface

            self._sock.setsockopt(socket.IPPROTO_IP, socket.IP_ADD_MEMBERSHIP, mreq)
            return True
        except OSError:
            return False
