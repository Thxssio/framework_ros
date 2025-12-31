"""ROS-integrated Qt port of the framework interface."""

from __future__ import annotations

import copy
import math
import sys
from typing import Callable, Dict, Optional

import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from rclpy.parameter import Parameter
from rclpy.qos import QoSProfile
from rcl_interfaces.msg import ParameterValue
from rcl_interfaces.msg import ParameterType
from rcl_interfaces.srv import GetParameters, SetParameters

from PyQt6 import QtCore, QtGui, QtWidgets

from importlib import resources
from interface_package.msg import (
    ControlCommand as RosControlCommand,
    FieldDimensions as RosFieldDimensions,
    Pose2D as RosPose2D,
    NavigationConfig as RosNavigationConfig,
    PathPreview as RosPathPreview,
    TeamColor as RosTeamColor,
    VisionDetection as RosVisionDetection,
    VisionGeometry as RosVisionGeometry,
    RobotTarget as RosRobotTarget,
    WorldState as RosWorldState,
)
from interface_package.srv import (
    GetNavigationConfig,
    SendRobotCommand,
    SetNavigationConfig,
)

from behavior_package import (
    BehaviorContext,
    BehaviorStatus,
    BehaviorBase,
    GoToBallBehavior,
)

from .field_widget import (
    BallState as GuiBallState,
    FieldGeom,
    FieldWidget,
    Pose2D as GuiPose2D,
    PathPreviewItem,
    PathPoint,
    RobotState as GuiRobotState,
    TeamColor as GuiTeamColor,
    WorldState as GuiWorldState,
)

NAV_FIELD_NAMES = [
    "stop_distance",
    "linear_gain",
    "max_speed",
    "max_angular_speed",
    "angular_gain",
    "planner_resolution",
    "planner_clearance",
    "collision_threshold",
    "optimizer_weight_smooth",
    "optimizer_weight_jerk",
    "optimizer_weight_obstacle",
    "optimizer_step_size",
    "optimizer_iterations",
    "optimizer_clearance",
    "force_path_planning",
    "max_segment_length",
]

BEHAVIOR_CHOICES = [
    ("", "None"),
    ("goto_ball", "Go To Ball"),
]

BEHAVIOR_LABELS = {key: label for key, label in BEHAVIOR_CHOICES}
BEHAVIOR_FACTORY = {
    "": None,
    "goto_ball": GoToBallBehavior,
}


class MainWindow(QtWidgets.QWidget):
    def __init__(self) -> None:
        super().__init__()
        self.setWindowTitle("Framework")
        self.resize(1920, 1280)

        self.field_widget = FieldWidget()
        self.field_widget.set_side_labels("Left: Blue", "Right: Yellow")
        self.field_widget.set_world(GuiWorldState(friendly_color=GuiTeamColor.kYellow))
        self._ros_node: Optional[GuiRosNode] = None
        self._vision_fields: Dict[str, QtWidgets.QWidget] = {}
        self._robot_commander_fields: Dict[str, QtWidgets.QWidget] = {}
        self._nav_fields: Dict[str, QtWidgets.QWidget] = {}
        self._last_friendly_color: GuiTeamColor | None = None
        self._command_fields: Dict[str, QtWidgets.QWidget] = {}
        self._vision_defaults: Dict[str, object] = {
            "bind_address": "0.0.0.0",
            "port": 10006,
            "multicast": "224.5.23.2",
            "interface_address": "0.0.0.0",
            "poll_period_s": 0.002,
            "merge_timeout_s": 0.03,
            "gc_timeout_s": 0.5,
            "friendly_color": "blue",
            "expected_cameras": 4,
            "blue_command_port": 10301,
            "yellow_command_port": 10302,
        }
        self._robot_commander_defaults: Dict[str, object] = {
            "host": "127.0.0.1",
            "port": 10301,
            "repeat_rate_hz": 60.0,
            "hold_time_s": 0.25,
        }
        self._nav_defaults: Dict[str, object] = {
            "stop_distance": 0.2,
            "linear_gain": 2.0,
            "max_speed": 1.0,
            "max_angular_speed": 3.0,
            "angular_gain": 4.0,
            "planner_resolution": 0.1,
            "planner_clearance": 0.15,
            "collision_threshold": 0.25,
            "optimizer_weight_smooth": 0.1,
            "optimizer_weight_jerk": 0.05,
            "optimizer_weight_obstacle": 0.5,
            "optimizer_step_size": 0.1,
            "optimizer_iterations": 40,
            "optimizer_clearance": 0.25,
            "force_path_planning": False,
            "max_segment_length": 2.0,
        }
        self._command_defaults: Dict[str, object] = {
            "robot_id": 0,
            "has_velocity": True,
            "vx": 0.0,
            "vy": 0.0,
            "omega": 0.0,
            "kick": False,
            "kick_speed": 0.0,
            "dribbler": False,
            "dribbler_rpm": 0.0,
        }

        self._apply_dark_palette()

        top_controls = self._build_top_controls()
        sidebar = self._build_sidebar()
        decision_panel = self._build_decision_panel()

        splitter = QtWidgets.QSplitter(QtCore.Qt.Orientation.Horizontal)
        splitter.addWidget(sidebar)
        splitter.addWidget(self.field_widget)
        splitter.addWidget(decision_panel)
        splitter.setStretchFactor(0, 0)
        splitter.setStretchFactor(1, 1)
        splitter.setStretchFactor(2, 0)
        splitter.setSizes([340, 700, 280])

        layout = QtWidgets.QVBoxLayout(self)
        layout.addLayout(top_controls)
        layout.addWidget(splitter)

    def _apply_dark_palette(self) -> None:
        palette = QtGui.QPalette()
        palette.setColor(QtGui.QPalette.ColorRole.Window, QtGui.QColor(37, 37, 38))
        palette.setColor(QtGui.QPalette.ColorRole.WindowText, QtCore.Qt.GlobalColor.white)
        palette.setColor(QtGui.QPalette.ColorRole.Base, QtGui.QColor(30, 30, 30))
        palette.setColor(QtGui.QPalette.ColorRole.AlternateBase, QtGui.QColor(37, 37, 38))
        palette.setColor(QtGui.QPalette.ColorRole.ToolTipBase, QtCore.Qt.GlobalColor.white)
        palette.setColor(QtGui.QPalette.ColorRole.ToolTipText, QtCore.Qt.GlobalColor.white)
        palette.setColor(QtGui.QPalette.ColorRole.Text, QtCore.Qt.GlobalColor.white)
        palette.setColor(QtGui.QPalette.ColorRole.Button, QtGui.QColor(45, 45, 48))
        palette.setColor(QtGui.QPalette.ColorRole.ButtonText, QtCore.Qt.GlobalColor.white)
        palette.setColor(QtGui.QPalette.ColorRole.Highlight, QtGui.QColor(0, 122, 204))
        palette.setColor(QtGui.QPalette.ColorRole.HighlightedText, QtCore.Qt.GlobalColor.white)
        app = QtWidgets.QApplication.instance()
        if app is not None:
            app.setPalette(palette)

    def _build_top_controls(self) -> QtWidgets.QHBoxLayout:
        layout = QtWidgets.QHBoxLayout()
        layout.setContentsMargins(8, 6, 8, 6)
        layout.setSpacing(12)

        show_path = QtWidgets.QCheckBox("Show path")
        show_direct = QtWidgets.QCheckBox("Show direct path")

        toggle_frame = QtWidgets.QFrame()
        toggle_frame.setFrameShape(QtWidgets.QFrame.Shape.NoFrame)
        toggle_layout = QtWidgets.QHBoxLayout(toggle_frame)
        toggle_layout.setContentsMargins(0, 0, 0, 0)
        toggle_layout.setSpacing(12)
        toggle_layout.addWidget(show_path)
        toggle_layout.addWidget(show_direct)
        toggle_layout.addStretch()
        toggle_frame.setSizePolicy(
            QtWidgets.QSizePolicy.Policy.Expanding,
            QtWidgets.QSizePolicy.Policy.Fixed,
        )

        status_frame = QtWidgets.QFrame()
        status_layout = QtWidgets.QVBoxLayout(status_frame)
        status_layout.setContentsMargins(0, 0, 0, 0)
        status_layout.setSpacing(2)
        status_layout.setAlignment(QtCore.Qt.AlignmentFlag.AlignRight | QtCore.Qt.AlignmentFlag.AlignVCenter)
        status_frame.setSizePolicy(
            QtWidgets.QSizePolicy.Policy.Maximum,
            QtWidgets.QSizePolicy.Policy.Fixed,
        )

        self._friendly_label = QtWidgets.QLabel("Friendly: --")
        self._friendly_label.setAlignment(QtCore.Qt.AlignmentFlag.AlignRight)
        self._friendly_label.setStyleSheet("font-weight: bold;")

        self._vision_status = QtWidgets.QLabel("Vision -- fps")
        self._vision_status.setAlignment(QtCore.Qt.AlignmentFlag.AlignRight)

        status_layout.addWidget(self._friendly_label)
        status_layout.addWidget(self._vision_status)

        layout.addWidget(toggle_frame, 1)
        layout.addWidget(status_frame, 0)

        show_path.toggled.connect(self.field_widget.set_show_path)
        show_direct.toggled.connect(self.field_widget.set_show_direct_path)
        return layout

    def _build_sidebar(self) -> QtWidgets.QWidget:
        sidebar_layout = QtWidgets.QVBoxLayout()
        sidebar_layout.setContentsMargins(6, 6, 6, 6)
        sidebar_layout.setSpacing(12)

        sidebar_layout.addWidget(self._create_vision_group())
        sidebar_layout.addWidget(self._create_robot_commander_group())
        sidebar_layout.addWidget(self._create_navigation_group())
        sidebar_layout.addWidget(self._create_command_group())
        sidebar_layout.addStretch()

        self._apply_vision_defaults()
        self._apply_robot_commander_defaults()
        self._apply_navigation_defaults()
        self._apply_command_defaults()

        sidebar_container = QtWidgets.QWidget()
        sidebar_container.setLayout(sidebar_layout)

        scroll = QtWidgets.QScrollArea()
        scroll.setWidgetResizable(True)
        scroll.setFrameShape(QtWidgets.QFrame.Shape.NoFrame)
        scroll.setWidget(sidebar_container)
        scroll.setMinimumWidth(400)
        return scroll

    def _create_vision_group(self) -> QtWidgets.QGroupBox:
        vision_group = QtWidgets.QGroupBox("Vision Receiver")
        form = QtWidgets.QFormLayout(vision_group)
        form.setRowWrapPolicy(QtWidgets.QFormLayout.RowWrapPolicy.DontWrapRows)
        form.setLabelAlignment(QtCore.Qt.AlignmentFlag.AlignRight)

        def add_line(name: str, widget: QtWidgets.QWidget, label: str) -> None:
            self._vision_fields[name] = widget
            form.addRow(label, widget)

        bind_edit = QtWidgets.QLineEdit()
        add_line("bind_address", bind_edit, "Bind address")

        port_spin = QtWidgets.QSpinBox()
        port_spin.setRange(1, 65535)
        add_line("port", port_spin, "Port")

        multicast_edit = QtWidgets.QLineEdit()
        add_line("multicast", multicast_edit, "Multicast")

        iface_edit = QtWidgets.QLineEdit()
        add_line("interface_address", iface_edit, "Interface")

        def make_dspin(decimals: int = 3) -> QtWidgets.QDoubleSpinBox:
            spin = QtWidgets.QDoubleSpinBox()
            spin.setDecimals(decimals)
            spin.setRange(0.0, 1000.0)
            spin.setSingleStep(0.001)
            return spin

        poll_spin = make_dspin(4)
        add_line("poll_period_s", poll_spin, "Poll period (s)")

        merge_spin = make_dspin(3)
        add_line("merge_timeout_s", merge_spin, "Merge timeout (s)")

        gc_spin = make_dspin(3)
        add_line("gc_timeout_s", gc_spin, "GC timeout (s)")

        friendly_combo = QtWidgets.QComboBox()
        friendly_combo.addItem("Blue", "blue")
        friendly_combo.addItem("Yellow", "yellow")
        add_line("friendly_color", friendly_combo, "Friendly team")

        cameras_spin = QtWidgets.QSpinBox()
        cameras_spin.setRange(1, 12)
        add_line("expected_cameras", cameras_spin, "Expected cameras")

        blue_cmd_port = QtWidgets.QSpinBox()
        blue_cmd_port.setRange(1, 65535)
        add_line("blue_command_port", blue_cmd_port, "Blue command port")

        yellow_cmd_port = QtWidgets.QSpinBox()
        yellow_cmd_port.setRange(1, 65535)
        add_line("yellow_command_port", yellow_cmd_port, "Yellow command port")

        button_row = QtWidgets.QHBoxLayout()
        apply_btn = QtWidgets.QPushButton("Apply")
        refresh_btn = QtWidgets.QPushButton("Refresh")
        button_row.addWidget(apply_btn)
        button_row.addWidget(refresh_btn)
        form.addRow(button_row)

        status_label = QtWidgets.QLabel()
        status_label.setStyleSheet("color: #bbb; font-size: 11px;")
        status_label.setWordWrap(True)
        form.addRow(status_label)

        self._vision_status_label = status_label
        self._vision_apply_button = apply_btn

        apply_btn.clicked.connect(self._on_apply_vision_params)
        refresh_btn.clicked.connect(self._request_vision_params)

        return vision_group

    def _create_robot_commander_group(self) -> QtWidgets.QGroupBox:
        group = QtWidgets.QGroupBox("Robot Commander")
        form = QtWidgets.QFormLayout(group)
        form.setLabelAlignment(QtCore.Qt.AlignmentFlag.AlignRight)

        def add_field(name: str, widget: QtWidgets.QWidget, label: str) -> None:
            self._robot_commander_fields[name] = widget
            form.addRow(label, widget)

        host_edit = QtWidgets.QLineEdit()
        host_edit.setPlaceholderText("127.0.0.1")
        add_field("host", host_edit, "Host")

        port_spin = QtWidgets.QSpinBox()
        port_spin.setRange(1, 65535)
        add_field("port", port_spin, "Port")

        repeat_spin = QtWidgets.QDoubleSpinBox()
        repeat_spin.setRange(0.0, 2000.0)
        repeat_spin.setDecimals(1)
        repeat_spin.setSuffix(" Hz")
        add_field("repeat_rate_hz", repeat_spin, "Repeat rate")

        hold_spin = QtWidgets.QDoubleSpinBox()
        hold_spin.setRange(0.0, 10.0)
        hold_spin.setDecimals(3)
        hold_spin.setSuffix(" s")
        add_field("hold_time_s", hold_spin, "Hold time")

        button_row = QtWidgets.QHBoxLayout()
        apply_btn = QtWidgets.QPushButton("Apply")
        refresh_btn = QtWidgets.QPushButton("Refresh")
        button_row.addWidget(apply_btn)
        button_row.addWidget(refresh_btn)
        form.addRow(button_row)

        status_label = QtWidgets.QLabel("Using default settings.")
        status_label.setStyleSheet("color: #bbb; font-size: 11px;")
        status_label.setWordWrap(True)
        form.addRow(status_label)

        self._robot_commander_status_label = status_label
        apply_btn.clicked.connect(self._on_apply_robot_commander_params)
        refresh_btn.clicked.connect(self._request_robot_commander_params)
        return group

    def _create_navigation_group(self) -> QtWidgets.QGroupBox:
        group = QtWidgets.QGroupBox("Navigation Config")
        form = QtWidgets.QFormLayout(group)
        form.setLabelAlignment(QtCore.Qt.AlignmentFlag.AlignRight)

        def add_field(name: str, widget: QtWidgets.QWidget, label: str) -> None:
            self._nav_fields[name] = widget
            form.addRow(label, widget)

        def make_spin(decimals: int = 3, min_value: float = -100.0, max_value: float = 100.0) -> QtWidgets.QDoubleSpinBox:
            spin = QtWidgets.QDoubleSpinBox()
            spin.setDecimals(decimals)
            spin.setRange(min_value, max_value)
            spin.setKeyboardTracking(False)
            spin.setMaximumWidth(140)
            return spin

        float_fields = [
            ("stop_distance", "Stop distance (m)"),
            ("linear_gain", "Linear gain"),
            ("max_speed", "Max speed (m/s)"),
            ("max_angular_speed", "Max angular speed (rad/s)"),
            ("angular_gain", "Angular gain"),
            ("planner_resolution", "Planner resolution (m)"),
            ("planner_clearance", "Planner clearance (m)"),
            ("collision_threshold", "Collision threshold (m)"),
            ("optimizer_weight_smooth", "Smooth weight"),
            ("optimizer_weight_jerk", "Jerk weight"),
            ("optimizer_weight_obstacle", "Obstacle weight"),
            ("optimizer_step_size", "Optimizer step"),
            ("optimizer_clearance", "Optimizer clearance (m)"),
            ("max_segment_length", "Max segment length (m)"),
        ]
        for field, label in float_fields:
            add_field(field, make_spin(), label)

        iter_spin = QtWidgets.QSpinBox()
        iter_spin.setRange(1, 10000)
        iter_spin.setMaximumWidth(140)
        add_field("optimizer_iterations", iter_spin, "Optimizer iterations")

        force_check = QtWidgets.QCheckBox("Force path planning")
        add_field("force_path_planning", force_check, "Force path planning")

        button_row = QtWidgets.QHBoxLayout()
        apply_btn = QtWidgets.QPushButton("Apply")
        refresh_btn = QtWidgets.QPushButton("Refresh")
        button_row.addWidget(apply_btn)
        button_row.addWidget(refresh_btn)
        form.addRow(button_row)

        status_label = QtWidgets.QLabel("Navigation config not loaded.")
        status_label.setWordWrap(True)
        status_label.setStyleSheet("color: #bbb; font-size: 11px;")
        form.addRow(status_label)

        self._nav_status_label = status_label
        apply_btn.clicked.connect(self._on_apply_navigation_config)
        refresh_btn.clicked.connect(self._request_navigation_config)
        return group

    def _create_command_group(self) -> QtWidgets.QGroupBox:
        group = QtWidgets.QGroupBox("Robot Command")
        form = QtWidgets.QFormLayout(group)
        form.setLabelAlignment(QtCore.Qt.AlignmentFlag.AlignRight)

        def add_cmd(name: str, widget: QtWidgets.QWidget, label: str) -> None:
            self._command_fields[name] = widget
            form.addRow(label, widget)

        robot_spin = QtWidgets.QSpinBox()
        robot_spin.setRange(0, 31)
        robot_spin.setMaximumWidth(120)
        add_cmd("robot_id", robot_spin, "Robot ID")

        has_vel = QtWidgets.QCheckBox("Include velocity command")
        has_vel.setChecked(True)
        add_cmd("has_velocity", has_vel, "Velocity")

        def make_vel_spin() -> QtWidgets.QDoubleSpinBox:
            spin = QtWidgets.QDoubleSpinBox()
            spin.setDecimals(2)
            spin.setRange(-5.0, 5.0)
            spin.setMaximumWidth(120)
            spin.setKeyboardTracking(False)
            return spin

        add_cmd("vx", make_vel_spin(), "vx (m/s)")
        add_cmd("vy", make_vel_spin(), "vy (m/s)")
        add_cmd("omega", make_vel_spin(), "ω (rad/s)")

        kick_check = QtWidgets.QCheckBox("Kick")
        add_cmd("kick", kick_check, "Kick")
        kick_speed = QtWidgets.QDoubleSpinBox()
        kick_speed.setRange(0.0, 10.0)
        kick_speed.setDecimals(2)
        kick_speed.setMaximumWidth(120)
        add_cmd("kick_speed", kick_speed, "Kick speed (m/s)")

        dribbler_check = QtWidgets.QCheckBox("Dribbler")
        add_cmd("dribbler", dribbler_check, "Dribbler")
        dribbler_rpm = QtWidgets.QDoubleSpinBox()
        dribbler_rpm.setRange(0.0, 10000.0)
        dribbler_rpm.setDecimals(0)
        dribbler_rpm.setMaximumWidth(120)
        add_cmd("dribbler_rpm", dribbler_rpm, "Dribbler RPM")

        button = QtWidgets.QPushButton("Send command")
        form.addRow(button)
        status_label = QtWidgets.QLabel("No command sent yet.")
        status_label.setWordWrap(True)
        status_label.setStyleSheet("color: #bbb; font-size: 11px;")
        form.addRow(status_label)

        self._command_status_label = status_label
        button.clicked.connect(self._on_send_robot_command)
        return group

    def _build_decision_panel(self) -> QtWidgets.QWidget:
        decision_title = QtWidgets.QLabel("Decision Trees")
        decision_title.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        decision_title.setStyleSheet("font-weight: bold;")

        placeholder = QtWidgets.QLabel("No robots yet")
        placeholder.setAlignment(
            QtCore.Qt.AlignmentFlag.AlignTop | QtCore.Qt.AlignmentFlag.AlignHCenter
        )
        placeholder.setStyleSheet("color: #aaa;")

        list_widget = QtWidgets.QWidget()
        list_layout = QtWidgets.QVBoxLayout(list_widget)
        list_layout.setAlignment(QtCore.Qt.AlignmentFlag.AlignTop)
        list_layout.setSpacing(6)
        list_layout.addWidget(placeholder)
        list_layout.addStretch()

        self._decision_placeholder = placeholder
        self._decision_list_layout = list_layout
        self._decision_cards: Dict[tuple[str, int], dict[str, QtWidgets.QWidget]] = {}
        self._tag_cache: Dict[tuple, QtGui.QPixmap] = {}
        self._behavior_assignments: Dict[int, str] = {}

        scroll = QtWidgets.QScrollArea()
        scroll.setWidgetResizable(True)
        scroll.setWidget(list_widget)
        scroll.setHorizontalScrollBarPolicy(QtCore.Qt.ScrollBarPolicy.ScrollBarAlwaysOff)

        panel_layout = QtWidgets.QVBoxLayout()
        panel_layout.addWidget(decision_title)
        panel_layout.addWidget(scroll)

        panel = QtWidgets.QWidget()
        panel.setLayout(panel_layout)
        panel.setMinimumWidth(320)
        panel.setMaximumWidth(420)
        return panel

    def apply_ros_parameters(self, params: Dict[str, str]) -> None:
        detection_topic = params.get("detection_topic")
        if detection_topic:
            self.field_widget.setToolTip(f"Subscribed to {detection_topic}")

    def _team_folder(self, friendly_flag: bool) -> str:
        world = getattr(self.field_widget, "world", None)
        if world is None:
            return "blue"
        fc = world.friendly_color
        if (friendly_flag and fc == GuiTeamColor.kYellow) or (
            (not friendly_flag) and fc == GuiTeamColor.kBlue
        ):
            return "yellow"
        return "blue"

    def bind_ros_node(self, node: GuiRosNode) -> None:
        self._ros_node = node
        QtCore.QTimer.singleShot(0, self._request_vision_params)
        QtCore.QTimer.singleShot(0, self._request_robot_commander_params)
        QtCore.QTimer.singleShot(0, self._request_navigation_config)

    def _request_vision_params(self) -> None:
        if self._ros_node is None:
            return
        self._vision_status_label.setStyleSheet("color: #bbb; font-size: 11px;")
        self._vision_status_label.setText("Fetching parameters...")
        self._ros_node.fetch_vision_parameters(self.populate_vision_form)

    def _request_navigation_config(self) -> None:
        if self._ros_node is None:
            return
        self._set_nav_status("Fetching navigation config...", "#bbb")
        self._ros_node.fetch_navigation_config(self._on_navigation_fetch)

    def _request_robot_commander_params(self) -> None:
        if self._ros_node is None:
            return
        self._set_robot_commander_status("Fetching robot commander parameters...", "#bbb")
        self._ros_node.fetch_robot_commander_parameters(self._on_robot_commander_fetch)

    def populate_vision_form(self, params: Dict[str, object]) -> None:
        for name, widget in self._vision_fields.items():
            if name not in params:
                continue
            value = params[name]
            if isinstance(widget, QtWidgets.QLineEdit):
                widget.setText(str(value))
            elif isinstance(widget, QtWidgets.QSpinBox):
                widget.setValue(int(value))
            elif isinstance(widget, QtWidgets.QDoubleSpinBox):
                widget.setValue(float(value))
            elif isinstance(widget, QtWidgets.QComboBox):
                idx = widget.findData(str(value).lower())
                if idx < 0:
                    idx = widget.findText(str(value), QtCore.Qt.MatchFlag.MatchFixedString)
                if idx >= 0 and widget.currentIndex() != idx:
                    blocker = QtCore.QSignalBlocker(widget)
                    widget.setCurrentIndex(idx)
        self._vision_status_label.setText("Parameters synced.")

    def populate_robot_commander_form(self, params: Dict[str, object]) -> None:
        for name, widget in self._robot_commander_fields.items():
            if name not in params:
                continue
            value = params[name]
            if isinstance(widget, QtWidgets.QLineEdit):
                widget.setText(str(value))
            elif isinstance(widget, QtWidgets.QSpinBox):
                widget.setValue(int(value))
            elif isinstance(widget, QtWidgets.QDoubleSpinBox):
                widget.setValue(float(value))

    def _collect_robot_commander_params(self) -> Dict[str, object]:
        result: Dict[str, object] = {}
        for name, widget in self._robot_commander_fields.items():
            if isinstance(widget, QtWidgets.QLineEdit):
                result[name] = widget.text().strip()
            elif isinstance(widget, QtWidgets.QSpinBox):
                result[name] = int(widget.value())
            elif isinstance(widget, QtWidgets.QDoubleSpinBox):
                result[name] = float(widget.value())
        return result

    def _collect_vision_params(self) -> Dict[str, object]:
        result: Dict[str, object] = {}
        for name, widget in self._vision_fields.items():
            if isinstance(widget, QtWidgets.QLineEdit):
                result[name] = widget.text()
            elif isinstance(widget, QtWidgets.QSpinBox):
                result[name] = int(widget.value())
            elif isinstance(widget, QtWidgets.QDoubleSpinBox):
                result[name] = float(widget.value())

            elif isinstance(widget, QtWidgets.QComboBox):
                result[name] = widget.currentData()

        return result

    def _on_apply_vision_params(self) -> None:
        if self._ros_node is None:
            self._vision_status_label.setText("ROS node unavailable.")
            return
        params = self._collect_vision_params()
        self._vision_status_label.setText("Applying parameters...")
        self._ros_node.set_vision_parameters(
            params, lambda ok, msg: self._on_param_apply_finished(ok, msg, params)
        )

    def _on_param_apply_finished(
        self, success: bool, message: str, params: Dict[str, object]
    ) -> None:
        color = "#2e7d32" if success else "#d32f2f"
        self._vision_status_label.setStyleSheet(f"color: {color}; font-size: 11px;")
        self._vision_status_label.setText(message)

    def _apply_vision_defaults(self) -> None:
        self.populate_vision_form(self._vision_defaults)
        if hasattr(self, "_vision_status_label"):
            self._vision_status_label.setText("Using default parameters.")

    def _apply_robot_commander_defaults(self) -> None:
        if not self._robot_commander_fields:
            return
        self.populate_robot_commander_form(self._robot_commander_defaults)
        self._set_robot_commander_status("Using default settings.", "#bbb")

    def _on_navigation_fetch(
        self, success: bool, message: str, config: Optional[RosNavigationConfig]
    ) -> None:
        color = "#2e7d32" if success else "#d32f2f"
        self._set_nav_status(message, color)
        if success and config is not None:
            values = {name: getattr(config, name) for name in NAV_FIELD_NAMES}
            self.populate_navigation_form(values)

    def populate_navigation_form(self, params: Dict[str, object]) -> None:
        for name, widget in self._nav_fields.items():
            if name not in params:
                continue
            value = params[name]
            if isinstance(widget, QtWidgets.QDoubleSpinBox):
                widget.setValue(float(value))
            elif isinstance(widget, QtWidgets.QSpinBox):
                widget.setValue(int(value))
            elif isinstance(widget, QtWidgets.QCheckBox):
                widget.setChecked(bool(value))
        self._set_nav_status("Navigation config synced.", "#2e7d32")

    def _collect_navigation_params(self) -> Dict[str, object]:
        result: Dict[str, object] = {}
        for name, widget in self._nav_fields.items():
            if isinstance(widget, QtWidgets.QDoubleSpinBox):
                result[name] = float(widget.value())
            elif isinstance(widget, QtWidgets.QSpinBox):
                result[name] = int(widget.value())
            elif isinstance(widget, QtWidgets.QCheckBox):
                result[name] = bool(widget.isChecked())
        return result

    def _apply_navigation_defaults(self) -> None:
        if not self._nav_fields:
            return
        self.populate_navigation_form(self._nav_defaults)
        self._set_nav_status("Using default navigation values.", "#bbb")

    def _set_nav_status(self, text: str, color: str) -> None:
        if hasattr(self, "_nav_status_label"):
            self._nav_status_label.setText(text)
            self._nav_status_label.setStyleSheet(f"color: {color}; font-size: 11px;")

    def _on_apply_navigation_config(self) -> None:
        if self._ros_node is None:
            self._set_nav_status("ROS node unavailable.", "#d32f2f")
            return
        config = self._collect_navigation_params()
        self._set_nav_status("Sending config...", "#bbb")
        self._ros_node.set_navigation_config(
            config, lambda ok, msg: self._set_nav_status(msg, "#2e7d32" if ok else "#d32f2f")
        )

    def _set_robot_commander_status(self, text: str, color: str) -> None:
        if hasattr(self, "_robot_commander_status_label"):
            self._robot_commander_status_label.setText(text)
            self._robot_commander_status_label.setStyleSheet(f"color: {color}; font-size: 11px;")

    def _on_robot_commander_fetch(
        self, success: bool, message: str, params: Dict[str, object]
    ) -> None:
        color = "#2e7d32" if success else "#d32f2f"
        self._set_robot_commander_status(message, color)
        if success:
            self.populate_robot_commander_form(params)

    def _on_apply_robot_commander_params(self) -> None:
        if self._ros_node is None:
            self._set_robot_commander_status("ROS node unavailable.", "#d32f2f")
            return
        params = self._collect_robot_commander_params()
        self._set_robot_commander_status("Sending parameters...", "#bbb")
        self._ros_node.set_robot_commander_parameters(
            params,
            lambda ok, msg: self._set_robot_commander_status(
                msg or ("Parameters applied." if ok else "Failed to update parameters."),
                "#2e7d32" if ok else "#d32f2f",
            ),
        )

    def _apply_command_defaults(self) -> None:
        if not self._command_fields:
            return
        for name, value in self._command_defaults.items():
            widget = self._command_fields.get(name)
            if widget is None:
                continue
            if isinstance(widget, QtWidgets.QSpinBox):
                widget.setValue(int(value))
            elif isinstance(widget, QtWidgets.QDoubleSpinBox):
                widget.setValue(float(value))
            elif isinstance(widget, QtWidgets.QCheckBox):
                widget.setChecked(bool(value))

    def _collect_robot_command(self) -> tuple[int, RosControlCommand]:
        robot_widget = self._command_fields.get("robot_id")
        robot_id = int(robot_widget.value()) if isinstance(robot_widget, QtWidgets.QSpinBox) else 0
        command = RosControlCommand()
        has_velocity = isinstance(
            self._command_fields.get("has_velocity"), QtWidgets.QCheckBox
        ) and self._command_fields["has_velocity"].isChecked()
        command.has_velocity = has_velocity
        vx_widget = self._command_fields.get("vx")
        vy_widget = self._command_fields.get("vy")
        omega_widget = self._command_fields.get("omega")
        if isinstance(vx_widget, QtWidgets.QDoubleSpinBox):
            command.velocity.vx = float(vx_widget.value())
        if isinstance(vy_widget, QtWidgets.QDoubleSpinBox):
            command.velocity.vy = float(vy_widget.value())
        if isinstance(omega_widget, QtWidgets.QDoubleSpinBox):
            command.velocity.omega = float(omega_widget.value())

        kick_widget = self._command_fields.get("kick")
        command.kick = bool(kick_widget.isChecked()) if isinstance(kick_widget, QtWidgets.QCheckBox) else False
        kick_speed_widget = self._command_fields.get("kick_speed")
        if isinstance(kick_speed_widget, QtWidgets.QDoubleSpinBox):
            command.kick_speed = float(kick_speed_widget.value())

        dribbler_widget = self._command_fields.get("dribbler")
        command.dribbler = bool(dribbler_widget.isChecked()) if isinstance(dribbler_widget, QtWidgets.QCheckBox) else False
        dribbler_rpm_widget = self._command_fields.get("dribbler_rpm")
        if isinstance(dribbler_rpm_widget, QtWidgets.QDoubleSpinBox):
            command.dribbler_rpm = float(dribbler_rpm_widget.value())
        return robot_id, command

    def _on_behavior_selection(self, robot_id: int, behavior_key: str) -> None:
        if self._ros_node is None:
            return
        self._behavior_assignments[robot_id] = behavior_key
        self._ros_node.assign_behavior(robot_id, behavior_key or "")

    def update_behavior_card(self, robot_id: int, behavior_key: str, status_text: str) -> None:
        self._behavior_assignments[robot_id] = behavior_key
        info = self._decision_cards.get(("friendly", robot_id))
        if not info:
            return
        combo: QtWidgets.QComboBox | None = info.get("combo")  # type: ignore[assignment]
        if combo is not None:
            idx = combo.findData(behavior_key)
            if idx < 0:
                idx = 0
            if combo.currentIndex() != idx:
                blocker = QtCore.QSignalBlocker(combo)
                combo.setCurrentIndex(idx)
        status_label: QtWidgets.QLabel | None = info.get("behavior_status")  # type: ignore[assignment]
        if status_label is not None:
            label = status_text or "Behavior idle."
            status_label.setText(label)

    def _sync_behavior_controls(self, robot_id: int, info: dict) -> None:
        combo: QtWidgets.QComboBox | None = info.get("combo")  # type: ignore[assignment]
        if combo is None:
            return
        desired = self._behavior_assignments.get(robot_id, "")
        idx = combo.findData(desired)
        if idx < 0:
            idx = 0
        if combo.currentIndex() != idx:
            blocker = QtCore.QSignalBlocker(combo)
            combo.setCurrentIndex(idx)
        status_label: QtWidgets.QLabel | None = info.get("behavior_status")  # type: ignore[assignment]
        if status_label is not None and not status_label.text():
            label = BEHAVIOR_LABELS.get(desired, "None")
            status_label.setText(f"{label} idle.")

    def _set_command_status(self, text: str, success: Optional[bool] = None) -> None:
        if hasattr(self, "_command_status_label"):
            color = "#bbb"
            if success is True:
                color = "#2e7d32"
            elif success is False:
                color = "#d32f2f"
            self._command_status_label.setStyleSheet(f"color: {color}; font-size: 11px;")
            self._command_status_label.setText(text)

    def on_world_update(self, world: GuiWorldState) -> None:
        if self._last_friendly_color is None:
            self._last_friendly_color = world.friendly_color
        elif world.friendly_color != self._last_friendly_color:
            self._tag_cache.clear()
            self._last_friendly_color = world.friendly_color

        color_text = "Yellow" if world.friendly_color == GuiTeamColor.kYellow else "Blue"
        self._friendly_label.setText(f"Friendly: {color_text}")
        self.update_robot_entries(world.friendly, world.opponent)

    def _on_send_robot_command(self) -> None:
        if self._ros_node is None:
            self._set_command_status("ROS node unavailable.", False)
            return
        robot_id, command = self._collect_robot_command()
        self._set_command_status(f"Sending command to robot {robot_id}...", None)
        self._ros_node.send_robot_command(
            robot_id,
            command,
            lambda ok, msg: self._set_command_status(msg, ok),
        )

    def update_vision_stats(self, fps: float | None) -> None:
        if fps is None or not math.isfinite(fps):
            self._vision_status.setText("Vision -- fps")
            self._vision_status.setStyleSheet("color: #888;")
            self._vision_status.setToolTip("")
            return

        slow = fps < 55.0
        self._vision_status.setText(f"Vision {fps:.1f} fps")
        color = "#d32f2f" if slow else "#2e7d32"
        weight = "600" if slow else "400"
        self._vision_status.setStyleSheet(f"color: {color}; font-weight: {weight};")
        self._vision_status.setToolTip(
            "Vision rate abaixo de 60 fps." if slow else ""
        )

    def update_robot_entries(
        self, friendly: list[GuiRobotState], opponent: list[GuiRobotState]
    ) -> None:
        layout = getattr(self, "_decision_list_layout", None)
        if layout is None:
            return

        placeholder: QtWidgets.QLabel | None = getattr(
            self, "_decision_placeholder", None
        )
        has_data = bool(friendly or opponent)
        if placeholder is not None:
            placeholder.setVisible(not has_data)

        def build_pixmap(
            robot_id: int, friendly_flag: bool, size: int = 48
        ) -> tuple[tuple, QtGui.QPixmap]:
            folder = self._team_folder(friendly_flag)
            key = (folder, robot_id, size)
            cache = getattr(self, "_tag_cache", {})
            if key in cache:
                return key, cache[key]

            try:
                base = resources.files("gui_package").joinpath(
                    "teams", folder, f"{robot_id}.png"
                )
                with resources.as_file(base) as img_path:
                    pix = QtGui.QPixmap(str(img_path))
            except (FileNotFoundError, ModuleNotFoundError, AttributeError):
                pix = QtGui.QPixmap()
            if not pix.isNull():
                transform = QtGui.QTransform()
                transform.scale(-1.0, -1.0)
                pix = pix.transformed(
                    transform, QtCore.Qt.TransformationMode.SmoothTransformation
                )
                pix = pix.scaled(
                    size,
                    size,
                    QtCore.Qt.AspectRatioMode.KeepAspectRatio,
                    QtCore.Qt.TransformationMode.SmoothTransformation,
                )
            cache[key] = pix
            self._tag_cache = cache
            return key, pix

        def ensure_card(kind: str, robot: GuiRobotState, friendly_flag: bool) -> dict:
            key = (kind, robot.id)
            cards = getattr(self, "_decision_cards", {})
            if key in cards:
                return cards[key]

            card = QtWidgets.QFrame()
            card.setFrameShape(QtWidgets.QFrame.Shape.StyledPanel)
            card.setStyleSheet(
                "QFrame { background-color: rgba(255,255,255,0.03); border: 1px solid #444; }"
            )
            card.setSizePolicy(
                QtWidgets.QSizePolicy.Policy.Expanding,
                QtWidgets.QSizePolicy.Policy.Fixed,
            )
            row = QtWidgets.QHBoxLayout(card)
            row.setContentsMargins(8, 4, 8, 4)
            row.setSpacing(8)

            icon = QtWidgets.QLabel()
            icon.setFixedSize(48, 48)
            icon.setStyleSheet("background-color: rgba(0,0,0,0.25); border-radius: 4px;")
            row.addWidget(icon)

            text_block = QtWidgets.QVBoxLayout()
            text_block.setSpacing(2)
            title = QtWidgets.QLabel()
            title.setStyleSheet("font-weight: bold;")
            text_block.addWidget(title)
            pose = QtWidgets.QLabel()
            pose.setStyleSheet("font-family: monospace; color: #bbb;")
            text_block.addWidget(pose)

            behavior_combo = None
            behavior_status = None
            if friendly_flag:
                combo_row = QtWidgets.QHBoxLayout()
                combo_row.setSpacing(6)
                behavior_combo = QtWidgets.QComboBox()
                for key_opt, label_opt in BEHAVIOR_CHOICES:
                    behavior_combo.addItem(label_opt, key_opt)
                combo_row.addWidget(behavior_combo, 0)
                behavior_status = QtWidgets.QLabel("")
                behavior_status.setStyleSheet("color: #bbb; font-size: 11px;")
                combo_row.addWidget(behavior_status, 1)
                text_block.addLayout(combo_row)

            row.addLayout(text_block, 1)
            row.addStretch()

            insert_at = layout.count() - 1
            layout.insertWidget(insert_at, card)

            info = {
                "widget": card,
                "title": title,
                "pose": pose,
                "icon": icon,
                "friendly": friendly_flag,
                "combo": behavior_combo,
                "behavior_status": behavior_status,
                "pix_key": None,
            }

            if friendly_flag and behavior_combo is not None:
                behavior_combo.currentIndexChanged.connect(
                    lambda idx, rid=robot.id, combo=behavior_combo: self._on_behavior_selection(
                        rid, combo.itemData(idx)
                    )
                )
                self._behavior_assignments.setdefault(robot.id, "")

            cards[key] = info
            self._decision_cards = cards
            return info

        def update_card(kind: str, robot: GuiRobotState, friendly_flag: bool) -> None:
            info = ensure_card(kind, robot, friendly_flag)
            prefix = "Friendly" if friendly_flag else "Opponent"
            info["title"].setText(f"{prefix} #{robot.id}")
            info["pose"].setText(f"x={robot.pose.x:.2f} y={robot.pose.y:.2f}")
            pix_key, pix = build_pixmap(robot.id, friendly_flag)
            icon_label: QtWidgets.QLabel = info["icon"]  # type: ignore[assignment]
            if info.get("pix_key") != pix_key:
                info["pix_key"] = pix_key
                if pix.isNull():
                    icon_label.clear()
                else:
                    icon_label.setPixmap(pix)
            if friendly_flag:
                self._sync_behavior_controls(robot.id, info)

        seen_keys: set[tuple[str, int]] = set()
        for robot in sorted(friendly, key=lambda r: r.id):
            update_card("friendly", robot, True)
            seen_keys.add(("friendly", robot.id))
        for robot in sorted(opponent, key=lambda r: r.id):
            update_card("opponent", robot, False)
            seen_keys.add(("opponent", robot.id))

        cards = getattr(self, "_decision_cards", {})
        for key in list(cards.keys()):
            if key in seen_keys:
                continue
            widget = cards[key]["widget"]
            layout.removeWidget(widget)
            widget.deleteLater()
            del cards[key]
        self._decision_cards = cards


def _ros_color_to_gui(color_msg: RosTeamColor) -> GuiTeamColor:
    if color_msg.value == RosTeamColor.YELLOW:
        return GuiTeamColor.kYellow
    return GuiTeamColor.kBlue


def _convert_world_state(msg: RosWorldState) -> GuiWorldState:
    penalty_depth = getattr(msg.field, "penalty_area_depth", 0.0)
    penalty_width = getattr(msg.field, "penalty_area_width", 0.0)

    field = FieldGeom(
        length=msg.field.length,
        width=msg.field.width,
        boundary_width=getattr(msg.field, "boundary_width", 0.0),
        goal_width=getattr(msg.field, "goal_width", 0.0),
        goal_depth=getattr(msg.field, "goal_depth", 0.0),
        penalty_area_depth=penalty_depth,
        penalty_area_width=penalty_width,
    )

    def to_pose(ros_pose) -> GuiPose2D:
        return GuiPose2D(x=ros_pose.x, y=ros_pose.y, theta=ros_pose.theta)

    def to_robot(ros_robot) -> GuiRobotState:
        return GuiRobotState(id=ros_robot.id, pose=to_pose(ros_robot.pose))

    friendly = [to_robot(robot) for robot in msg.friendly]
    opponent = [to_robot(robot) for robot in msg.opponent]

    ball_pose = to_pose(msg.ball.pose)
    ball_visible = bool(getattr(msg.ball, "visible", False))
    ball = GuiBallState(visible=ball_visible, pose=ball_pose)

    return GuiWorldState(
        friendly_color=_ros_color_to_gui(msg.friendly_color),
        field=field,
        friendly=friendly,
        opponent=opponent,
        ball=ball,
    )


class GuiRosNode(Node):
    def __init__(
        self,
        field_widget: FieldWidget,
        stats_callback: Callable[[float | None], None] | None = None,
        robots_callback: Callable[[GuiWorldState], None] | None = None,
        behavior_callback: Callable[[int, str, str], None] | None = None,
    ) -> None:
        super().__init__("framework")
        self._field_widget = field_widget
        self._stats_callback = stats_callback
        self._robots_callback = robots_callback
        self._behavior_callback = behavior_callback
        self._last_capture_ts: float | None = None
        self._desired_friendly_color: str = ""  # 'blue' | 'yellow' | '' (follow incoming)
        self._vision_param_names = [
            "bind_address",
            "port",
            "multicast",
            "interface_address",
            "poll_period_s",
            "merge_timeout_s",
            "gc_timeout_s",
            "friendly_color",
            "expected_cameras",
        ]
        self._robot_param_names = [
            "host",
            "port",
            "repeat_rate_hz",
            "hold_time_s",
        ]
        self._get_param_client = self.create_client(
            GetParameters, "/vision_receiver/get_parameters"
        )
        self._set_param_client = self.create_client(
            SetParameters, "/vision_receiver/set_parameters"
        )
        self._get_robot_param_client = self.create_client(
            GetParameters, "/robot_commander/get_parameters"
        )
        self._set_robot_param_client = self.create_client(
            SetParameters, "/robot_commander/set_parameters"
        )
        nav_get_service = self._sanitize_service_name(
            self.declare_parameter("navigation_get_service", "/navigation_manager/get_navigation_config").value
        )
        nav_set_service = self._sanitize_service_name(
            self.declare_parameter("navigation_set_service", "/navigation_manager/set_navigation_config").value
        )
        robot_service = self._sanitize_service_name(
            self.declare_parameter("robot_command_service", "/robot_commander/send_robot_command").value
        )
        self._get_nav_client = (
            self.create_client(GetNavigationConfig, nav_get_service) if nav_get_service else None
        )
        self._set_nav_client = (
            self.create_client(SetNavigationConfig, nav_set_service) if nav_set_service else None
        )
        self._robot_command_client = (
            self.create_client(SendRobotCommand, robot_service) if robot_service else None
        )
        self._behavior_assignments: Dict[int, str] = {}
        self._behaviors: Dict[int, BehaviorBase] = {}
        self._nav_config: Optional[RosNavigationConfig] = None
        blue_param = self.declare_parameter("blue_command_port", 10301)
        yellow_param = self.declare_parameter("yellow_command_port", 10302)
        self._blue_command_port = int(blue_param.value)
        self._yellow_command_port = int(yellow_param.value)
        self._current_robot_commander_port: int | None = None

        detection_param = self.declare_parameter("detection_topic", "vision/detection")
        geometry_param = self.declare_parameter("geometry_topic", "vision/geometry")
        path_param = self.declare_parameter("path_preview_topic", "navigation/path_preview")
        target_param = self.declare_parameter("robot_target_topic", "behavior/robot_target")
        detection_topic = str(detection_param.value)
        geometry_topic = str(geometry_param.value)
        path_topic = str(path_param.value)
        target_topic = str(target_param.value)

        # Mirror relevant parameters so the GUI can display them.
        self.declare_parameter("friendly_color", "yellow")

        try:
            initial_color = str(self.get_parameter("friendly_color").value)
            self._apply_desired_friendly_color(initial_color)
        except Exception:
            self._desired_friendly_color = ""
        self._sync_robot_commander_port_for_team()

        detection_qos = QoSProfile(depth=10)
        self._detection_sub = self.create_subscription(
            RosVisionDetection, detection_topic, self._on_detection, detection_qos
        )
        geometry_qos = QoSProfile(depth=5)
        self._geometry_sub = self.create_subscription(
            RosVisionGeometry, geometry_topic, self._on_geometry, geometry_qos
        )
        self._field_dimensions_msg = RosFieldDimensions()
        self._field_geom = FieldGeom()
        self._path_preview_items: Dict[int, PathPreviewItem] = {}
        self._robot_target_pub = self.create_publisher(RosRobotTarget, target_topic, 10)
        path_qos = QoSProfile(depth=10)
        self._path_preview_sub = self.create_subscription(
            RosPathPreview, path_topic, self._on_path_preview, path_qos
        )
        self.get_logger().info(
            f"GUI subscribed to detection '{detection_topic}', geometry '{geometry_topic}', path preview '{path_topic}', publishing targets to '{target_topic}'"
        )

    def parameter_snapshot(self) -> Dict[str, str]:
        return {
            "detection_topic": str(self.get_parameter("detection_topic").value),
            "geometry_topic": str(self.get_parameter("geometry_topic").value),
            "path_preview_topic": str(self.get_parameter("path_preview_topic").value),
            "robot_target_topic": str(self.get_parameter("robot_target_topic").value),
        }

    def fetch_vision_parameters(self, callback: Callable[[Dict[str, object]], None]) -> None:
        if not self._get_param_client.service_is_ready():
            self._get_param_client.wait_for_service(timeout_sec=0.5)
        names = list(self._vision_param_names)
        request = GetParameters.Request(names=names)
        future = self._get_param_client.call_async(request)

        def _done(fut):
            values: Dict[str, object] = {}
            try:
                response = fut.result()
                for name, value in zip(names, response.values):
                    values[name] = self._parameter_value_to_python(value)
                if values:
                    self._apply_local_vision_params(values)
            except Exception as exc:  # pragma: no cover - defensive
                self.get_logger().error(f"Failed to fetch parameters: {exc}")
            callback(values)

        future.add_done_callback(_done)

    def set_vision_parameters(
        self, params: Dict[str, object], callback: Callable[[bool, str], None]
    ) -> None:
        if not self._set_param_client.service_is_ready():
            self._set_param_client.wait_for_service(timeout_sec=0.5)

        self._apply_local_vision_params(params)

        to_set = []
        for name, value in params.items():
            if name not in self._vision_param_names:
                continue
            to_set.append(Parameter(name=name, value=value).to_parameter_msg())
        if not to_set:
            callback(True, "No parameters to update.")
            return

        request = SetParameters.Request(parameters=to_set)
        future = self._set_param_client.call_async(request)

        def _done(fut):
            message = "Parameters applied."
            success = True
            try:
                response = fut.result()
                for result in response.results:
                    if not result.successful:
                        success = False
                        message = result.reason or "Failed to apply parameters."
                        break
            except Exception as exc:  # pragma: no cover - defensive
                success = False
                message = str(exc)
            callback(success, message)

        future.add_done_callback(_done)

    def _update_robot_commander_port(self, port: object) -> None:
        try:
            port_value = int(port)
        except (TypeError, ValueError):
            self.get_logger().warn(f"Invalid robot commander port: {port}")
            return
        if self._current_robot_commander_port == port_value:
            return
        if not self._set_robot_param_client.service_is_ready():
            # Try to wait briefly, but don't block too long
            if not self._set_robot_param_client.wait_for_service(timeout_sec=0.1):
                self.get_logger().warn("Robot commander service not ready, skipping port update.")
                return
        
        req = SetParameters.Request()
        req.parameters = [Parameter(name="port", value=port_value).to_parameter_msg()]
        self._set_robot_param_client.call_async(req)
        self._current_robot_commander_port = port_value
        self._handle_robot_commander_port_update(port_value)

    def _parameter_value_to_python(self, value: ParameterValue) -> object:
        ptype = value.type
        if ptype == ParameterType.PARAMETER_BOOL:
            return bool(value.bool_value)
        if ptype == ParameterType.PARAMETER_INTEGER:
            return int(value.integer_value)
        if ptype == ParameterType.PARAMETER_DOUBLE:
            return float(value.double_value)
        if ptype == ParameterType.PARAMETER_STRING:
            return str(value.string_value)
        if ptype == ParameterType.PARAMETER_BYTE_ARRAY:
            return list(value.byte_array_value)
        if ptype == ParameterType.PARAMETER_BOOL_ARRAY:
            return list(value.bool_array_value)
        if ptype == ParameterType.PARAMETER_INTEGER_ARRAY:
            return list(value.integer_array_value)
        if ptype == ParameterType.PARAMETER_DOUBLE_ARRAY:
            return list(value.double_array_value)
        if ptype == ParameterType.PARAMETER_STRING_ARRAY:
            return list(value.string_array_value)
        return None

    def _on_detection(self, msg: RosVisionDetection) -> None:
        world = self._world_state_from_detection(msg)
        self._on_world(world)

    def _on_geometry(self, msg: RosVisionGeometry) -> None:
        field_msg = getattr(msg, "field", None)
        if field_msg is None:
            return
        try:
            self._field_dimensions_msg = copy.deepcopy(field_msg)
        except Exception:
            self._field_dimensions_msg = RosFieldDimensions()
            self._field_dimensions_msg.length = float(getattr(field_msg, "length", 0.0))
            self._field_dimensions_msg.width = float(getattr(field_msg, "width", 0.0))
            self._field_dimensions_msg.goal_width = float(getattr(field_msg, "goal_width", 0.0))
            self._field_dimensions_msg.goal_depth = float(getattr(field_msg, "goal_depth", 0.0))
            self._field_dimensions_msg.boundary_width = float(getattr(field_msg, "boundary_width", 0.0))
        previous = getattr(self, "_field_geom", FieldGeom())
        self._field_geom = FieldGeom(
            length=float(field_msg.length) if field_msg.length else previous.length,
            width=float(field_msg.width) if field_msg.width else previous.width,
            boundary_width=float(field_msg.boundary_width) if field_msg.boundary_width else previous.boundary_width,
            goal_width=float(field_msg.goal_width) if field_msg.goal_width else previous.goal_width,
            goal_depth=float(field_msg.goal_depth) if field_msg.goal_depth else previous.goal_depth,
            penalty_area_depth=previous.penalty_area_depth,
            penalty_area_width=previous.penalty_area_width,
        )

    def _on_path_preview(self, msg: RosPathPreview) -> None:
        if msg is None:
            return
        robot_id = int(getattr(msg, "robot_id", -1))
        item = PathPreviewItem(robot_id=robot_id)
        item.path = [
            PathPoint(x=float(pt.x), y=float(pt.y)) for pt in getattr(msg, "path", [])
        ]
        item.direct = [
            PathPoint(x=float(pt.x), y=float(pt.y)) for pt in getattr(msg, "direct", [])
        ]
        if not item.path and not item.direct:
            self._path_preview_items.pop(robot_id, None)
        else:
            self._path_preview_items[robot_id] = item
        ordered = [self._path_preview_items[rid] for rid in sorted(self._path_preview_items.keys())]
        self._field_widget.set_path_preview(ordered)

    def fetch_robot_commander_parameters(
        self, callback: Callable[[bool, str, Dict[str, object]], None]
    ) -> None:
        if not self._get_robot_param_client.service_is_ready():
            self._get_robot_param_client.wait_for_service(timeout_sec=0.5)
        names = list(self._robot_param_names)
        request = GetParameters.Request(names=names)
        future = self._get_robot_param_client.call_async(request)

        def _done(fut):
            values: Dict[str, object] = {}
            success = True
            message = "Robot commander parameters synced."
            try:
                response = fut.result()
                for name, value in zip(names, response.values):
                    values[name] = self._parameter_value_to_python(value)
                if "port" in values and values["port"] is not None:
                    self._handle_robot_commander_port_update(values["port"])
            except Exception as exc:  # pragma: no cover - defensive
                success = False
                message = f"Failed to fetch parameters: {exc}"
            callback(success, message, values)

        future.add_done_callback(_done)

    def set_robot_commander_parameters(
        self, params: Dict[str, object], callback: Callable[[bool, str], None]
    ) -> None:
        if not self._set_robot_param_client.service_is_ready():
            if not self._set_robot_param_client.wait_for_service(timeout_sec=0.5):
                callback(False, "Robot commander service not ready.")
                return
        to_set = []
        for name in self._robot_param_names:
            if name not in params:
                continue
            to_set.append(Parameter(name=name, value=params[name]).to_parameter_msg())
        if not to_set:
            callback(True, "No parameters to update.")
            return
        request = SetParameters.Request(parameters=to_set)
        future = self._set_robot_param_client.call_async(request)

        def _done(fut):
            success = True
            message = "Parameters applied."
            try:
                response = fut.result()
                for result in response.results:
                    if not result.successful:
                        success = False
                        message = result.reason or "Failed to apply parameters."
                        break
                if success and "port" in params:
                    self._handle_robot_commander_port_update(params["port"])
            except Exception as exc:  # pragma: no cover - defensive
                success = False
                message = str(exc)
            callback(success, message)

        future.add_done_callback(_done)

    def _handle_robot_commander_port_update(self, port: object) -> None:
        team = self._infer_team_from_port(port)
        if team:
            self._apply_desired_friendly_color(team)

    def _infer_team_from_port(self, port: object) -> str | None:
        try:
            port_value = int(port)
        except (TypeError, ValueError):
            return None
        if port_value == self._blue_command_port:
            return "blue"
        if port_value == self._yellow_command_port:
            return "yellow"
        return None

    def _apply_desired_friendly_color(self, color: object) -> None:
        try:
            normalized = str(color).strip().lower()
        except Exception:
            normalized = ""
        if normalized not in ("blue", "yellow", ""):
            return
        if normalized == self._desired_friendly_color:
            return
        if normalized:
            self.get_logger().info(f"Friendly team set to {normalized}.")
        else:
            self.get_logger().info("Friendly team follows incoming feed.")
        self._desired_friendly_color = normalized

    def _sync_robot_commander_port_for_team(self) -> None:
        desired = str(self._desired_friendly_color).strip().lower()
        port = None
        if desired == "blue":
            port = self._blue_command_port
        elif desired == "yellow":
            port = self._yellow_command_port
        if port is not None:
            self._update_robot_commander_port(port)

    def _apply_local_vision_params(self, params: Dict[str, object]) -> None:
        updates: list[Parameter] = []
        need_sync = False

        blue = params.get("blue_command_port")
        if blue is not None:
            try:
                new_blue = int(blue)
            except (TypeError, ValueError):
                new_blue = None
            if new_blue is not None and new_blue != self._blue_command_port:
                self._blue_command_port = new_blue
                updates.append(Parameter(name="blue_command_port", value=new_blue))
                if self._desired_friendly_color == "blue":
                    need_sync = True

        yellow = params.get("yellow_command_port")
        if yellow is not None:
            try:
                new_yellow = int(yellow)
            except (TypeError, ValueError):
                new_yellow = None
            if new_yellow is not None and new_yellow != self._yellow_command_port:
                self._yellow_command_port = new_yellow
                updates.append(Parameter(name="yellow_command_port", value=new_yellow))
                if self._desired_friendly_color == "yellow":
                    need_sync = True

        if updates:
            try:
                self.set_parameters(updates)
            except Exception:
                pass

        friendly = params.get("friendly_color")
        if friendly is not None:
            normalized = str(friendly).strip().lower()
            if normalized in ("blue", "yellow"):
                prior = self._desired_friendly_color
                self._apply_desired_friendly_color(normalized)
                if prior != normalized:
                    need_sync = True

        if need_sync:
            self._sync_robot_commander_port_for_team()

    def _world_state_from_detection(self, msg: RosVisionDetection) -> RosWorldState:
        world = RosWorldState()
        world.stamp = msg.stamp
        try:
            world.capture_timestamp = float(msg.capture_timestamp)
        except (TypeError, ValueError):
            world.capture_timestamp = 0.0
        try:
            world.field = copy.deepcopy(self._field_dimensions_msg)
        except Exception:
            world.field = RosFieldDimensions()
        friendly_is_yellow = (str(self._desired_friendly_color).strip().lower() != "blue")
        source_friendly = msg.yellow if friendly_is_yellow else msg.blue
        source_opponent = msg.blue if friendly_is_yellow else msg.yellow
        world.friendly = [copy.deepcopy(robot) for robot in source_friendly]
        world.opponent = [copy.deepcopy(robot) for robot in source_opponent]
        world.ball = copy.deepcopy(msg.ball)
        world.friendly_color.value = RosTeamColor.YELLOW if friendly_is_yellow else RosTeamColor.BLUE
        return world

    def _on_world(self, msg: RosWorldState) -> None:
        gui_world = _convert_world_state(msg)

        # GUI must treat "friendly" as the team we are commanding.
        # The incoming topic may come from multiple sources or have swapped friendly/opponent.
        desired = str(self._desired_friendly_color).strip().lower()
        if desired in ("blue", "yellow"):
            incoming = "yellow" if msg.friendly_color.value == RosTeamColor.YELLOW else "blue"
            desired_gui = GuiTeamColor.kYellow if desired == "yellow" else GuiTeamColor.kBlue
            if desired != incoming:
                gui_world = GuiWorldState(
                    friendly_color=desired_gui,
                    field=gui_world.field,
                    friendly=gui_world.opponent,
                    opponent=gui_world.friendly,
                    ball=gui_world.ball,
                )
            else:
                gui_world = GuiWorldState(
                    friendly_color=desired_gui,
                    field=gui_world.field,
                    friendly=gui_world.friendly,
                    opponent=gui_world.opponent,
                    ball=gui_world.ball,
                )
        self._field_widget.set_world(gui_world)
        if self._robots_callback is not None:
            self._robots_callback(gui_world)
        capture_ts = float(msg.capture_timestamp)
        fps: float | None = None
        delta_time = 0.0
        if capture_ts > 0.0 and self._last_capture_ts is not None:
            dt = capture_ts - self._last_capture_ts
            if dt > 1e-4:
                fps = 1.0 / dt
                delta_time = dt
        if capture_ts > 0.0:
            self._last_capture_ts = capture_ts
        if self._stats_callback is not None:
            self._stats_callback(fps)
        self._tick_behaviors(msg, delta_time if delta_time > 0.0 else 0.02)

    def _sanitize_service_name(self, value: object) -> str:
        name = str(value).strip() if value is not None else ""
        if not name:
            return ""
        if not name.startswith("/"):
            name = "/" + name
        return name

    def fetch_navigation_config(
        self, callback: Callable[[bool, str, Optional[RosNavigationConfig]], None]
    ) -> None:
        if self._get_nav_client is None:
            callback(False, "Navigation service disabled.", None)
            return
        if not self._get_nav_client.service_is_ready():
            self._get_nav_client.wait_for_service(timeout_sec=0.5)
        future = self._get_nav_client.call_async(GetNavigationConfig.Request())

        def _done(fut):
            success = False
            message = "Navigation config unavailable."
            config = None
            try:
                response = fut.result()
                cfg_copy = self._clone_nav_config(response.config)
                self._nav_config = cfg_copy
                self._refresh_behavior_configs()
                config = cfg_copy
                success = True
                message = "Navigation config synced."
            except Exception as exc:  # pragma: no cover - defensive
                message = str(exc)
            callback(success, message, config)

        future.add_done_callback(_done)

    def set_navigation_config(
        self, config: Dict[str, object], callback: Callable[[bool, str], None]
    ) -> None:
        if self._set_nav_client is None:
            callback(False, "Navigation service disabled.")
            return
        if not self._set_nav_client.service_is_ready():
            self._set_nav_client.wait_for_service(timeout_sec=0.5)
        msg = RosNavigationConfig()
        for name, value in config.items():
            if hasattr(msg, name):
                setattr(msg, name, value)
        request = SetNavigationConfig.Request(config=msg)
        future = self._set_nav_client.call_async(request)

        def _done(fut):
            success = False
            message = "Failed to send config."
            try:
                response = fut.result()
                success = bool(response.ok)
                message = response.message or ("Navigation config updated." if success else "Navigation config rejected.")
                if success:
                    self._nav_config = self._clone_nav_config(msg)
                    self._refresh_behavior_configs()
            except Exception as exc:  # pragma: no cover - defensive
                message = str(exc)
            callback(success, message)

        future.add_done_callback(_done)

    def send_robot_command(
        self,
        robot_id: int,
        command: RosControlCommand,
        callback: Callable[[bool, str], None],
    ) -> None:
        if self._robot_command_client is None:
            callback(False, "Robot command service unavailable.")
            return
        if not self._robot_command_client.service_is_ready():
            if not self._robot_command_client.wait_for_service(timeout_sec=0.5):
                callback(False, "Robot command service not ready.")
                return
        request = SendRobotCommand.Request(robot_id=robot_id, command=command)
        try:
            future = self._robot_command_client.call_async(request)
        except Exception as exc:  # pragma: no cover - defensive
            callback(False, str(exc))
            return

        def _done(fut):
            success = False
            message = "Failed to send command."
            try:
                response = fut.result()
                success = bool(response.ok)
                message = response.message or ("Command sent." if success else "Command failed.")
            except Exception as exc:  # pragma: no cover - defensive
                message = str(exc)
            callback(success, message)

        future.add_done_callback(_done)

    def assign_behavior(self, robot_id: int, behavior_key: str) -> None:
        key = behavior_key if behavior_key in BEHAVIOR_FACTORY else ""
        self._behavior_assignments[robot_id] = key
        if not key:
            self._behaviors.pop(robot_id, None)
            self._last_behavior_command.pop(robot_id, None)
            self._notify_behavior(robot_id, key, "Behavior disabled.")
            return
        instance = self._instantiate_behavior(robot_id, key)
        if instance is None:
            self._behaviors.pop(robot_id, None)
            self._notify_behavior(robot_id, key, "Waiting for navigation config.")
        else:
            self._behaviors[robot_id] = instance
            self._notify_behavior(robot_id, key, "Behavior ready.")

    def _instantiate_behavior(self, robot_id: int, behavior_key: str) -> Optional[BehaviorBase]:
        factory = BEHAVIOR_FACTORY.get(behavior_key)
        if factory is None or self._nav_config is None:
            return None
        config = self._clone_nav_config(self._nav_config)
        behavior = factory(robot_id, config)
        return behavior

    def _notify_behavior(self, robot_id: int, behavior_key: str, text: str) -> None:
        if self._behavior_callback is not None:
            self._behavior_callback(robot_id, behavior_key, text)

    def _clone_nav_config(self, cfg: Optional[RosNavigationConfig]) -> RosNavigationConfig:
        clone = RosNavigationConfig()
        if cfg is None:
            return clone
        for name in NAV_FIELD_NAMES:
            setattr(clone, name, getattr(cfg, name))
        return clone

    def _refresh_behavior_configs(self) -> None:
        if self._nav_config is None:
            return
        for robot_id, key in list(self._behavior_assignments.items()):
            if not key:
                continue
            if robot_id not in self._behaviors:
                instance = self._instantiate_behavior(robot_id, key)
                if instance is not None:
                    self._behaviors[robot_id] = instance
                    self._notify_behavior(robot_id, key, "Behavior ready.")
        if not self._behaviors:
            return
        for robot_id, behavior in list(self._behaviors.items()):
            config = self._clone_nav_config(self._nav_config)
            if hasattr(behavior, "set_navigation_config"):
                try:
                    behavior.set_navigation_config(config)  # type: ignore[attr-defined]
                except Exception as exc:  # pragma: no cover - defensive
                    self.get_logger().warn(f"Failed to update behavior config for robot {robot_id}: {exc}")

    def _friendly_defends_positive_x(self, msg: RosWorldState) -> bool:
        _ = msg
        return True

    def _tick_behaviors(self, world_msg: RosWorldState, delta_time: float) -> None:
        if not self._behaviors:
            return
        dt = max(delta_time, 1e-3)
        defense = self._friendly_defends_positive_x(world_msg)
        for robot_id, behavior in list(self._behaviors.items()):
            context = BehaviorContext(
                world=world_msg,
                delta_time=dt,
                robot_id=robot_id,
                friendly_defends_positive_x=defense,
            )
            status = BehaviorStatus.RUNNING
            try:
                status = behavior.tick(context)
            except Exception as exc:  # pragma: no cover - defensive
                self.get_logger().error(f"Behavior {behavior} tick failed: {exc}")
                status = BehaviorStatus.FAILURE
            target = behavior.last_target if hasattr(behavior, "last_target") else None
            if target is not None:
                self._publish_robot_target(robot_id, target)
            self._emit_behavior_status(robot_id, status)

    def _emit_behavior_status(self, robot_id: int, status: BehaviorStatus) -> None:
        key = self._behavior_assignments.get(robot_id, "")
        label = BEHAVIOR_LABELS.get(key, "None")
        status_text = {
            BehaviorStatus.RUNNING: "Running",
            BehaviorStatus.SUCCESS: "Success",
            BehaviorStatus.FAILURE: "Failure",
        }.get(status, status.name.title())
        self._notify_behavior(robot_id, key, f"{label}: {status_text}")

    def _publish_robot_target(self, robot_id: int, target: RosRobotTarget) -> None:
        if self._robot_target_pub is None:
            return
        try:
            msg = copy.deepcopy(target)
        except Exception:
            msg = RosRobotTarget()
            if hasattr(target, "target"):
                msg.target = copy.deepcopy(target.target)
            msg.force_path = bool(getattr(target, "force_path", False))
            msg.allow_goal_area = bool(getattr(target, "allow_goal_area", True))
            msg.avoid_ball = bool(getattr(target, "avoid_ball", True))
        if msg.robot_id <= 0:
            msg.robot_id = robot_id
        if msg.target is None:
            msg.target = RosPose2D()
        if msg.stamp is None or (msg.stamp.sec == 0 and msg.stamp.nanosec == 0):
            msg.stamp = self.get_clock().now().to_msg()
        self._robot_target_pub.publish(msg)


def main() -> None:  # pragma: no cover - GUI entry point
    rclpy.init(args=None)
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    ros_node = GuiRosNode(
        window.field_widget,
        window.update_vision_stats,
        lambda world: window.on_world_update(world),
        window.update_behavior_card,
    )
    window.apply_ros_parameters(ros_node.parameter_snapshot())
    window.bind_ros_node(ros_node)

    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(ros_node)

    timer = QtCore.QTimer()

    def _stop_timer_and_quit() -> None:
        if timer.isActive():
            timer.stop()
        app_instance = QtWidgets.QApplication.instance()
        if app_instance is not None and not app_instance.closingDown():
            app_instance.quit()

    def _pump_executor() -> None:
        if not rclpy.ok():
            _stop_timer_and_quit()
            return
        try:
            executor.spin_once(timeout_sec=0.0)
        except ExternalShutdownException:
            _stop_timer_and_quit()
        except Exception as exc:
            message = str(exc)
            if "context is not valid" in message or "rcl_shutdown" in message:
                _stop_timer_and_quit()
            else:
                raise

    timer.timeout.connect(_pump_executor)
    timer.start(10)

    window.show()
    exit_code = app.exec()
    timer.stop()
    executor.remove_node(ros_node)
    ros_node.destroy_node()
    rclpy.shutdown()
    sys.exit(exit_code)


if __name__ == "__main__":  # pragma: no cover
    main()
