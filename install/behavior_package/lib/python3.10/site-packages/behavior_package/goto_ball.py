"""Simple Go-To-Ball behavior implemented in Python."""

from __future__ import annotations

import math
from typing import Optional

from interface_package.msg import NavigationConfig, Pose2D, RobotTarget

from .behavior import BehaviorBase, BehaviorContext, BehaviorStatus


class GoToBallBehavior(BehaviorBase):
    """Drive a robot straight toward the current ball pose."""

    def __init__(self, robot_id: int, config: NavigationConfig) -> None:
        super().__init__("GoToBall")
        self._robot_id = robot_id
        self._config = config
        self._initialized = False

    @property
    def robot_id(self) -> int:
        return self._robot_id

    def set_navigation_config(self, config: NavigationConfig) -> None:
        self._config = config

    def initialize(self, context: BehaviorContext) -> None:  # noqa: D401
        self._initialized = True
        self.clear_last_target()

    def terminate(self, context: BehaviorContext, status: BehaviorStatus) -> None:  # noqa: D401
        self.clear_last_target()

    def tick(self, context: BehaviorContext) -> BehaviorStatus:
        if not self._initialized:
            self.initialize(context)

        robot = self._find_robot(context)
        if robot is None:
            self.clear_last_target()
            return BehaviorStatus.FAILURE

        ball = context.world.ball
        if not getattr(ball, "visible", False):
            self.clear_last_target()
            return BehaviorStatus.FAILURE

        dx = ball.pose.x - robot.pose.x
        dy = ball.pose.y - robot.pose.y
        distance = math.hypot(dx, dy)

        if distance <= self._config.stop_distance:
            target = self._make_hold_target(context, robot.pose)
            self.set_last_target(target)
            return BehaviorStatus.SUCCESS

        target = self._make_chase_target(context, robot.pose, ball.pose)
        self.set_last_target(target)
        return BehaviorStatus.RUNNING

    # ------------------------------------------------------------------
    def _find_robot(self, context: BehaviorContext):
        for robot in context.world.friendly:
            if robot.id == self._robot_id:
                return robot
        return None

    def _make_hold_target(self, context: BehaviorContext, pose: Pose2D) -> RobotTarget:
        target = RobotTarget()
        target.stamp = context.world.stamp
        target.robot_id = self._robot_id
        target.target = Pose2D()
        target.target.x = pose.x
        target.target.y = pose.y
        target.target.theta = pose.theta
        target.force_path = False
        target.allow_goal_area = True
        target.avoid_ball = False
        return target

    def _make_chase_target(
        self, context: BehaviorContext, robot_pose: Pose2D, ball_pose: Pose2D
    ) -> RobotTarget:
        target = RobotTarget()
        target.stamp = context.world.stamp
        target.robot_id = self._robot_id
        desired_theta = math.atan2(ball_pose.y - robot_pose.y, ball_pose.x - robot_pose.x)
        target_pose = Pose2D()
        target_pose.x = ball_pose.x
        target_pose.y = ball_pose.y
        target_pose.theta = desired_theta
        target.target = target_pose
        target.force_path = True
        target.allow_goal_area = False
        target.avoid_ball = False
        return target

    @staticmethod
    def _normalize_angle(angle: float) -> float:
        while angle > math.pi:
            angle -= 2.0 * math.pi
        while angle < -math.pi:
            angle += 2.0 * math.pi
        return angle
