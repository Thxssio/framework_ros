"""Common behavior abstractions for Python-based strategy modules."""

from __future__ import annotations

import dataclasses
import enum
from abc import ABC, abstractmethod
from typing import Optional

from interface_package.msg import RobotTarget, WorldState


class BehaviorStatus(enum.Enum):
    """Possible results of a behavior tick."""

    RUNNING = 0
    SUCCESS = 1
    FAILURE = 2


@dataclasses.dataclass(slots=True)
class BehaviorContext:
    """Snapshot of the world and execution metadata passed to behaviors."""

    world: WorldState
    delta_time: float
    robot_id: int
    friendly_defends_positive_x: bool = True


class BehaviorBase(ABC):
    """Abstract base class for all high-level behaviors."""

    def __init__(self, name: str) -> None:
        self._name = name
        self._last_target: Optional[RobotTarget] = None

    @property
    def name(self) -> str:
        return self._name

    @property
    def last_target(self) -> Optional[RobotTarget]:
        return self._last_target

    def clear_last_target(self) -> None:
        self._last_target = None

    def set_last_target(self, target: Optional[RobotTarget]) -> None:
        self._last_target = target

    @abstractmethod
    def initialize(self, context: BehaviorContext) -> None:
        """Called before the first tick or when a behavior is re-used."""

    @abstractmethod
    def tick(self, context: BehaviorContext) -> BehaviorStatus:
        """Execute one iteration of the behavior."""

    def terminate(self, context: BehaviorContext, status: BehaviorStatus) -> None:
        """Optional callback invoked when a behavior stops running."""

    def __repr__(self) -> str:
        return f"{self.__class__.__name__}(name={self._name!r})"
