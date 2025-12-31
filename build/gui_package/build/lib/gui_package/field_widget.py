from __future__ import annotations

import math
from dataclasses import dataclass, field as dc_field
from enum import Enum
from typing import Dict, List, Optional, Tuple

from PyQt6.QtCore import QPointF, QRectF, Qt, pyqtSignal
from PyQt6.QtGui import QColor, QFont, QMouseEvent, QPainter, QPen, QPixmap
from PyQt6.QtWidgets import QWidget

from .robot_faces import RobotFaceAtlas


class TeamColor(Enum):
    kYellow = 1
    kBlue = 2


@dataclass
class Pose2D:
    x: float = 0.0
    y: float = 0.0
    theta: float = 0.0


@dataclass
class RobotState:
    id: int = 0
    pose: Pose2D = dc_field(default_factory=Pose2D)
    team_color: TeamColor | None = None


@dataclass
class BallState:
    visible: bool = True
    pose: Pose2D = dc_field(default_factory=Pose2D)


@dataclass
class FieldGeom:
    length: float = 0.0
    width: float = 0.0
    boundary_width: float = 0.0
    goal_width: float = 0.0
    goal_depth: float = 0.0
    penalty_area_depth: float = 0.0
    penalty_area_width: float = 0.0


@dataclass
class PathPoint:
    x: float
    y: float


@dataclass
class PathPreviewItem:
    robot_id: int = -1
    path: List[PathPoint] = dc_field(default_factory=list)
    direct: List[PathPoint] = dc_field(default_factory=list)


@dataclass
class WorldState:
    friendly_color: TeamColor = TeamColor.kYellow
    field: FieldGeom = dc_field(default_factory=FieldGeom)
    friendly: List[RobotState] = dc_field(default_factory=list)
    opponent: List[RobotState] = dc_field(default_factory=list)
    ball: BallState = dc_field(default_factory=BallState)



def HomeColor() -> QColor:
    return QColor(100, 181, 246)

def AwayColor() -> QColor:
    return QColor(239, 154, 154)

def FieldColor() -> QColor:
    return QColor(34, 120, 34)

def FieldLineColor() -> QColor:
    return QColor(255, 255, 255)

def BackgroundColor() -> QColor:
    return QColor(15, 40, 15)

def BallColor() -> QColor:
    return QColor(255, 180, 60)

kDefaultFieldLength = 9.0
kDefaultFieldWidth = 6.0
kDefaultBoundary = 0.5
kDefaultGoalWidth = 1.0
kDefaultGoalDepth = 0.18
kDefaultCenterCircle = 0.5
kDefaultRobotRadius = 0.09
kDefaultBallRadius = 0.0215
kDefaultPenaltyDepth = 0.5
kDefaultPenaltyWidth = 1.35


def draw_dragged_ball(p: QPainter, center: QPointF, radius: float) -> None:
    p.save()
    p.setOpacity(0.7)
    p.setPen(QPen(Qt.GlobalColor.black, 1))
    p.setBrush(BallColor())
    p.drawEllipse(center, radius, radius)
    p.restore()


def draw_dragged_robot(
    p: QPainter,
    icon: QPixmap,
    color: QColor,
    radius: float,
    direction: float,
    center: QPointF,
) -> None:
    p.save()
    p.setOpacity(0.7)
    if not icon.isNull():
        p.translate(center)
        angle_deg = (-direction * 180.0 / math.pi - 90.0)
        p.rotate(angle_deg)
        center_point = QPointF(-icon.width() / 2.0, -icon.height() / 2.0)
        p.drawPixmap(center_point, icon)
    else:
        p.setPen(Qt.PenStyle.NoPen)
        p.setBrush(color)
        p.drawEllipse(center, radius, radius)
    p.restore()


@dataclass
class ActiveDrag:
    is_ball: bool
    robot_id: int
    is_yellow: bool
    dir: float


@dataclass
class DragPreview:
    is_ball: bool = False
    robot_id: int = -1
    is_yellow: bool = False
    dir: float = 0.0
    world_pos: QPointF = dc_field(default_factory=QPointF)


class FieldWidget(QWidget):

    DragReleased = pyqtSignal(bool, int, bool, float, QPointF)
    FieldClicked = pyqtSignal(QPointF, object, object)

    def __init__(self, parent: Optional[QWidget] = None) -> None:
        super().__init__(parent)
        self.setMinimumSize(900, 600)
        self.setAttribute(Qt.WidgetAttribute.WA_OpaquePaintEvent, True)
        self.setAttribute(Qt.WidgetAttribute.WA_NoSystemBackground, True)
        self.setAutoFillBackground(False)

        self.world: Optional[WorldState] = None
        self.show_path: bool = False
        self.show_direct_path: bool = False
        self.path_preview: List[PathPreviewItem] = []

        self.left_side_label: str = ""
        self.right_side_label: str = ""

        self.active_drag: Optional[ActiveDrag] = None
        self.drag_preview: Optional[DragPreview] = None

        self._face_atlas = RobotFaceAtlas()

    def set_world(self, world_state: Optional[WorldState]) -> None:
        self.world = world_state
        self.update()

    def set_show_path(self, enabled: bool) -> None:
        self.show_path = enabled
        self.update()

    def set_show_direct_path(self, enabled: bool) -> None:
        self.show_direct_path = enabled
        self.update()

    def set_path_preview(self, paths: List[PathPreviewItem]) -> None:
        self.path_preview = paths
        self.update()

    def set_side_labels(self, left: str, right: str) -> None:
        self.left_side_label = left
        self.right_side_label = right
        self.update()

    def paintEvent(self, event) -> None:
        _ = event
        painter = QPainter(self)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing, True)

        self.draw_field(painter)
        self.draw_ball(painter)

        if self.show_path and self.world is not None and self.path_preview:
            path_colors = [QColor(Qt.GlobalColor.yellow), QColor(Qt.GlobalColor.cyan),
                           QColor(Qt.GlobalColor.magenta), QColor(Qt.GlobalColor.white)]
            painter.save()
            for idx, item in enumerate(self.path_preview):
                if len(item.path) >= 2:
                    painter.setPen(QPen(path_colors[idx % len(path_colors)], 2, Qt.PenStyle.SolidLine))
                    prev = self.world_to_screen(item.path[0].x, item.path[0].y)
                    for pt in item.path[1:]:
                        nxt = self.world_to_screen(pt.x, pt.y)
                        painter.drawLine(prev, nxt)
                        prev = nxt

                if self.show_direct_path and len(item.direct) >= 2:
                    painter.setPen(QPen(QColor(50, 100, 255), 1, Qt.PenStyle.DashLine))
                    prev = self.world_to_screen(item.direct[0].x, item.direct[0].y)
                    for pt in item.direct[1:]:
                        nxt = self.world_to_screen(pt.x, pt.y)
                        painter.drawLine(prev, nxt)
                        prev = nxt
            painter.restore()

        self.draw_robots(painter)

        if self.drag_preview is not None:
            scale, offx, offy = self.compute_field_transform()
            _ = (offx, offy)
            center = self.world_to_screen(self.drag_preview.world_pos.x(), self.drag_preview.world_pos.y())
            if self.drag_preview.is_ball:
                r = self.ball_radius() * scale
                draw_dragged_ball(painter, center, r)
            else:
                r = self.robot_radius() * scale
                friendly = False
                if self.world is not None:
                    friendly_is_yellow = (self.world.friendly_color == TeamColor.kYellow)
                    friendly = (self.drag_preview.is_yellow == friendly_is_yellow)

                dummy = RobotState(id=int(self.drag_preview.robot_id), pose=Pose2D(theta=self.drag_preview.dir))
                diameter = max(1, int(r * 2.0))
                icon = self.robot_icon(dummy, friendly, diameter) if self.world is not None else QPixmap()
                color = HomeColor() if friendly else AwayColor()
                draw_dragged_robot(painter, icon, color, r, self.drag_preview.dir, center)


    def draw_field(self, painter: QPainter) -> None:
        painter.fillRect(self.rect(), BackgroundColor())
        scale, offset_x, offset_y = self.compute_field_transform()
        length = self.field_length()
        width = self.field_width()
        boundary = self.boundary_width()

        background_rect = QRectF(
            offset_x - boundary * scale,
            offset_y - boundary * scale,
            (length + 2 * boundary) * scale,
            (width + 2 * boundary) * scale,
        )
        painter.fillRect(background_rect, BackgroundColor())

        field_rect = QRectF(offset_x, offset_y, length * scale, width * scale)
        painter.fillRect(field_rect, FieldColor())

        painter.setPen(QPen(FieldLineColor(), max(2.0, scale * 0.01)))
        painter.setBrush(Qt.BrushStyle.NoBrush)
        painter.drawRect(field_rect)

        mid_x = field_rect.left() + field_rect.width() / 2.0
        painter.drawLine(QPointF(mid_x, field_rect.top()), QPointF(mid_x, field_rect.bottom()))

        circle_r = self.center_circle_radius() * scale
        painter.drawEllipse(QPointF(mid_x, field_rect.center().y()), circle_r, circle_r)

        goal_width = self.goal_width()
        goal_depth = self.goal_depth()

        def draw_goal(left: bool) -> None:
            base_x = field_rect.left() if left else field_rect.right()
            goal_y = field_rect.center().y()
            goal_rect = QRectF(
                base_x + (-goal_depth * scale if left else 0.0),
                goal_y - (goal_width / 2.0) * scale,
                goal_depth * scale,
                goal_width * scale,
            )
            painter.setPen(QPen(FieldLineColor(), max(2.0, scale * 0.01)))
            painter.setBrush(Qt.BrushStyle.NoBrush)
            painter.drawRect(goal_rect)

        draw_goal(True)
        draw_goal(False)

        painter.save()
        side_font = QFont(painter.font())
        side_font.setBold(True)
        side_font.setPointSizeF(max(10.0, field_rect.height() * 0.04))
        painter.setFont(side_font)
        painter.setPen(Qt.GlobalColor.white)

        margin = 12.0
        left_rect = QRectF(
            field_rect.left() + margin,
            field_rect.top() - side_font.pointSizeF() - margin,
            field_rect.width() / 2.0 - 2.0 * margin,
            side_font.pointSizeF() + 6.0,
        )
        painter.drawText(left_rect, int(Qt.AlignmentFlag.AlignLeft | Qt.AlignmentFlag.AlignVCenter), self.left_side_label)

        right_rect = QRectF(
            field_rect.center().x() + margin,
            field_rect.top() - side_font.pointSizeF() - margin,
            field_rect.width() / 2.0 - 2.0 * margin,
            side_font.pointSizeF() + 6.0,
        )
        painter.drawText(right_rect, int(Qt.AlignmentFlag.AlignRight | Qt.AlignmentFlag.AlignVCenter), self.right_side_label)
        painter.restore()

        penalty_depth = self.penalty_depth()
        penalty_width = self.penalty_width()
        if penalty_depth > 0.0 and penalty_width > 0.0:
            penalty_h_px = penalty_width * scale
            penalty_d_px = penalty_depth * scale

            def draw_penalty(left: bool) -> None:
                rect_x = field_rect.left() if left else field_rect.right() - penalty_d_px
                rect_y = field_rect.center().y() - penalty_h_px / 2.0
                painter.drawRect(QRectF(rect_x, rect_y, penalty_d_px, penalty_h_px))

            draw_penalty(True)
            draw_penalty(False)

    def draw_robots(self, painter: QPainter) -> None:
        if self.world is None:
            return

        scale, _, _ = self.compute_field_transform()
        radius = self.robot_radius() * scale

        def is_dragged(robot: RobotState, friendly: bool) -> bool:
            if self.drag_preview is None or self.drag_preview.is_ball:
                return False
            robot_is_yellow = (self.world.friendly_color == TeamColor.kYellow) if friendly else (self.world.friendly_color != TeamColor.kYellow)
            return (self.drag_preview.robot_id == int(robot.id)) and (self.drag_preview.is_yellow == robot_is_yellow)

        def draw_team(robots: List[RobotState], friendly: bool) -> None:
            for robot in robots:
                if is_dragged(robot, friendly):
                    continue

                center = self.world_to_screen(robot.pose.x, robot.pose.y)
                drew_sprite = False

                diameter = max(1, int(radius * 2.0))
                pix = self.robot_icon(robot, friendly, diameter)
                if not pix.isNull():
                    painter.save()
                    painter.translate(center)
                    angle_deg = (-robot.pose.theta * 180.0 / math.pi - 90.0)
                    painter.rotate(angle_deg)
                    top_left = QPointF(-pix.width() / 2.0, -pix.height() / 2.0)
                    painter.drawPixmap(top_left, pix)
                    painter.restore()
                    drew_sprite = True
                else:
                    painter.setPen(Qt.PenStyle.NoPen)
                    painter.setBrush(HomeColor() if friendly else AwayColor())
                    painter.drawEllipse(center, radius, radius)

                painter.save()
                font = QFont(painter.font())
                font.setBold(True)
                font.setPointSizeF(max(8.0, radius * 0.7))
                painter.setFont(font)

                text = str(robot.id)
                text_rect = QRectF(center.x() + radius * 0.2, center.y() - radius * 1.1, radius, radius)

                painter.setPen(QPen(Qt.GlobalColor.black, 2.0 if drew_sprite else 1.0))
                painter.drawText(text_rect.translated(1, 1), int(Qt.AlignmentFlag.AlignRight | Qt.AlignmentFlag.AlignTop), text)
                painter.setPen(Qt.GlobalColor.white)
                painter.drawText(text_rect, int(Qt.AlignmentFlag.AlignRight | Qt.AlignmentFlag.AlignTop), text)
                painter.restore()

        friendly_is_yellow = (self.world.friendly_color == TeamColor.kYellow)
        draw_team(self.world.friendly, True)
        draw_team(self.world.opponent, False)

    def draw_ball(self, painter: QPainter) -> None:
        if self.world is None or not self.world.ball.visible:
            return
        if self.drag_preview is not None and self.drag_preview.is_ball:
            return

        scale, _, _ = self.compute_field_transform()
        radius = self.ball_radius() * scale
        center = self.world_to_screen(self.world.ball.pose.x, self.world.ball.pose.y)
        painter.setPen(QPen(Qt.GlobalColor.black, 1))
        painter.setBrush(BallColor())
        painter.drawEllipse(center, radius, radius)


    def world_to_screen(self, x: float, y: float) -> QPointF:
        scale, offset_x, offset_y = self.compute_field_transform()
        length = self.field_length()
        width = self.field_width()
        sx = offset_x + (x + length / 2.0) * scale
        sy = offset_y + (width / 2.0 - y) * scale
        return QPointF(sx, sy)

    def compute_field_transform(self) -> Tuple[float, float, float]:
        length = self.field_length()
        width = self.field_width()
        boundary = self.boundary_width()

        total_length = length + 2 * boundary
        total_width = width + 2 * boundary

        available_w = max(1, self.width())
        available_h = max(1, self.height())

        scale = min(available_w / total_length, available_h / total_width)
        offset_x = (available_w - length * scale) / 2.0
        offset_y = (available_h - width * scale) / 2.0
        return scale, offset_x, offset_y

    def screen_to_world(self, point: QPointF) -> Optional[QPointF]:
        scale, offset_x, offset_y = self.compute_field_transform()
        length = self.field_length()
        width = self.field_width()

        field_rect = QRectF(offset_x, offset_y, length * scale, width * scale)
        if not field_rect.contains(point):
            return None

        wx = (point.x() - offset_x) / scale - length / 2.0
        wy = width / 2.0 - (point.y() - offset_y) / scale
        return QPointF(wx, wy)


    def mousePressEvent(self, event: QMouseEvent) -> None:
        self.active_drag = self.pick_object(event.position())
        if self.active_drag is not None and self.world is not None:
            preview = DragPreview()
            preview.is_ball = self.active_drag.is_ball
            preview.robot_id = self.active_drag.robot_id
            preview.is_yellow = self.active_drag.is_yellow
            preview.dir = self.active_drag.dir

            if self.active_drag.is_ball:
                preview.world_pos = QPointF(self.world.ball.pose.x, self.world.ball.pose.y)
            else:
                target_is_yellow = self.active_drag.is_yellow
                friendly_is_yellow = (self.world.friendly_color == TeamColor.kYellow)
                team = self.world.friendly if (target_is_yellow == friendly_is_yellow) else self.world.opponent
                for r in team:
                    if int(r.id) == self.active_drag.robot_id:
                        preview.world_pos = QPointF(r.pose.x, r.pose.y)
                        preview.dir = r.pose.theta
                        break

            self.drag_preview = preview
            self.update()

        super().mousePressEvent(event)

    def mouseReleaseEvent(self, event: QMouseEvent) -> None:
        world_pt = self.screen_to_world(event.position())
        if self.active_drag is not None and world_pt is not None:
            self.DragReleased.emit(
                self.active_drag.is_ball,
                self.active_drag.robot_id,
                self.active_drag.is_yellow,
                self.active_drag.dir,
                world_pt,
            )
        elif world_pt is not None:
            self.FieldClicked.emit(world_pt, event.button(), event.modifiers())

        self.active_drag = None
        self.drag_preview = None
        self.update()
        super().mouseReleaseEvent(event)

    def mouseMoveEvent(self, event: QMouseEvent) -> None:
        if self.active_drag is None:
            super().mouseMoveEvent(event)
            return

        world_pt = self.screen_to_world(event.position())
        if world_pt is not None:
            if self.drag_preview is None:
                self.drag_preview = DragPreview(
                    is_ball=self.active_drag.is_ball,
                    robot_id=self.active_drag.robot_id,
                    is_yellow=self.active_drag.is_yellow,
                    dir=self.active_drag.dir,
                )
            self.drag_preview.world_pos = world_pt
            self.update()

        super().mouseMoveEvent(event)


    def pick_object(self, point: QPointF) -> Optional[ActiveDrag]:
        if self.world is None:
            return None

        scale, _, _ = self.compute_field_transform()
        best_dist2 = float("inf")
        best: Optional[ActiveDrag] = None

        if self.world.ball.visible:
            center = self.world_to_screen(self.world.ball.pose.x, self.world.ball.pose.y)
            r = self.ball_radius() * scale * 1.6
            dx = center.x() - point.x()
            dy = center.y() - point.y()
            d2 = dx * dx + dy * dy
            if d2 <= r * r and d2 < best_dist2:
                best = ActiveDrag(is_ball=True, robot_id=-1, is_yellow=False, dir=0.0)
                best_dist2 = d2

        def consider_team(robots: List[RobotState], is_yellow_team: bool) -> None:
            nonlocal best, best_dist2
            for robot in robots:
                center = self.world_to_screen(robot.pose.x, robot.pose.y)
                r = self.robot_radius() * scale * 1.4
                dx = center.x() - point.x()
                dy = center.y() - point.y()
                d2 = dx * dx + dy * dy
                if d2 <= r * r and d2 < best_dist2:
                    best = ActiveDrag(
                        is_ball=False,
                        robot_id=int(robot.id),
                        is_yellow=is_yellow_team,
                        dir=robot.pose.theta,
                    )
                    best_dist2 = d2

        friendly_is_yellow = (self.world.friendly_color == TeamColor.kYellow)
        consider_team(self.world.friendly, friendly_is_yellow)
        consider_team(self.world.opponent, not friendly_is_yellow)

        return best


    def field_length(self) -> float:
        if self.world is not None and self.world.field.length > 0:
            return self.world.field.length
        return kDefaultFieldLength

    def field_width(self) -> float:
        if self.world is not None and self.world.field.width > 0:
            return self.world.field.width
        return kDefaultFieldWidth

    def boundary_width(self) -> float:
        if self.world is not None and self.world.field.boundary_width > 0:
            return self.world.field.boundary_width
        return kDefaultBoundary

    def goal_width(self) -> float:
        if self.world is not None and self.world.field.goal_width > 0:
            return self.world.field.goal_width
        return kDefaultGoalWidth

    def goal_depth(self) -> float:
        if self.world is not None and self.world.field.goal_depth > 0:
            return self.world.field.goal_depth
        return kDefaultGoalDepth

    def penalty_depth(self) -> float:
        if self.world is not None and self.world.field.penalty_area_depth > 0:
            return self.world.field.penalty_area_depth
        return kDefaultPenaltyDepth

    def penalty_width(self) -> float:
        if self.world is not None and self.world.field.penalty_area_width > 0:
            return self.world.field.penalty_area_width
        return kDefaultPenaltyWidth

    def center_circle_radius(self) -> float:
        return kDefaultCenterCircle

    def robot_radius(self) -> float:
        return kDefaultRobotRadius

    def ball_radius(self) -> float:
        return kDefaultBallRadius


    def robot_icon(self, robot: RobotState, friendly: bool, diameter_px: Optional[int] = None) -> QPixmap:
        if diameter_px is None:
            diameter_px = int(max(1.0, self.robot_radius() * 2.0 * self.compute_field_transform()[0]))
        if diameter_px <= 0:
            return QPixmap()
        friendly_is_yellow = True
        if self.world is not None:
            friendly_is_yellow = (self.world.friendly_color == TeamColor.kYellow)
        team_is_yellow = friendly_is_yellow if friendly else (not friendly_is_yellow)
        return self._face_atlas.pixmap(int(robot.id), team_is_yellow, diameter_px)
