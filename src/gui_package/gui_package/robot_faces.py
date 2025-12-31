from __future__ import annotations

import json
from importlib import resources
from typing import Dict, Tuple

from PyQt6.QtCore import QRectF, Qt
from PyQt6.QtGui import QColor, QPainter, QPainterPath, QPixmap, QTransform


class RobotFaceAtlas:
    """Loads the JSON robot face definition and renders QPixmaps on demand."""

    def __init__(self) -> None:
        self._template = self._load_template()
        self._cache: Dict[Tuple[bool, int, int], QPixmap] = {}

    def available(self) -> bool:
        return self._template is not None

    def pixmap(self, robot_id: int, team_is_yellow: bool, diameter_px: int) -> QPixmap:
        if not self.available() or diameter_px <= 0:
            return QPixmap()

        key = (bool(team_is_yellow), int(robot_id), int(diameter_px))
        cached = self._cache.get(key)
        if cached is not None and not cached.isNull():
            return cached

        template = self._template
        configs: Dict[int, Dict[str, str]] = template["configs"]
        config = configs.get(int(robot_id))
        if config is None and template["ordered_config_ids"]:
            order = template["ordered_config_ids"]
            config = configs[order[int(robot_id) % len(order)]]
        if config is None:
            return QPixmap()

        radius = template["background"]["radius"]
        pixmap = QPixmap(max(1, diameter_px), max(1, diameter_px))
        pixmap.fill(Qt.GlobalColor.transparent)

        painter = QPainter(pixmap)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing, True)
        scale = diameter_px / (radius * 2.0)
        painter.translate(diameter_px / 2.0, diameter_px / 2.0)
        painter.scale(scale, scale)

        self._draw_background(painter, template, team_is_yellow)

        for element_name in template["layout"]:
            element = template["elements"].get(element_name)
            color_key = config.get(element_name)
            if element is None or color_key is None:
                continue
            color = self._resolve_color(color_key, team_is_yellow, template)
            painter.setPen(Qt.PenStyle.NoPen)
            painter.setBrush(color)
            ex = element["x"]
            ey = element["y"]
            er = element["radius"]
            rect = QRectF(ex - er, ey - er, er * 2.0, er * 2.0)
            painter.drawEllipse(rect)

        painter.end()
        mirror = QTransform()
        mirror.scale(-1.0, 1.0)
        pixmap = pixmap.transformed(mirror, Qt.TransformationMode.SmoothTransformation)
        self._cache[key] = pixmap
        return pixmap

    def _load_template(self):
        try:
            resource = resources.files(__package__).joinpath("teams", "robot_faces.json")
        except Exception:
            return None
        try:
            with resources.as_file(resource) as cfg_path:
                with open(cfg_path, "r", encoding="utf-8") as handle:
                    raw = json.load(handle)
        except Exception:
            return None

        palette = {}
        for name, value in raw.get("palette_definitions", {}).items():
            try:
                palette[name.lower()] = QColor(value)
            except Exception:
                continue

        geometry = raw.get("geometry", {})
        background = geometry.get("background", {}) or {}
        elements_raw = geometry.get("elements", {}) or {}
        normalized_elements: Dict[str, Dict[str, float]] = {}
        for key, info in elements_raw.items():
            try:
                normalized_elements[key] = {
                    "x": float(info.get("x", 0.0)),
                    "y": float(info.get("y", 0.0)),
                    "radius": max(1.0, float(info.get("radius", 10.0))),
                }
            except Exception:
                continue

        layout = [str(item) for item in raw.get("layout_map", []) if isinstance(item, str)]
        configs: Dict[int, Dict[str, str]] = {}
        ordered_ids: list[int] = []
        for cfg in raw.get("configurations", []):
            try:
                cfg_id = int(cfg.get("id", len(configs)))
            except Exception:
                continue
            colors = cfg.get("map", [])
            mapping: Dict[str, str] = {}
            for idx, element_name in enumerate(layout):
                if idx >= len(colors):
                    break
                color_name = colors[idx]
                if isinstance(color_name, str):
                    mapping[element_name] = color_name.lower()
            if mapping:
                configs[cfg_id] = mapping
                ordered_ids.append(cfg_id)

        if not configs or not layout:
            return None

        return {
            "palette": palette,
            "background": {
                "radius": float(background.get("radius", 85.0)),
                "cut_y_offset": float(background.get("cut_y_offset", 0.0)),
                "color": str(background.get("color", "black")).lower(),
            },
            "elements": normalized_elements,
            "layout": layout,
            "configs": configs,
            "ordered_config_ids": ordered_ids,
        }

    def _team_color_value(self, team_is_yellow: bool) -> QColor:
        return QColor(236, 200, 64) if team_is_yellow else QColor(80, 140, 255)

    def _resolve_color(self, name: str, team_is_yellow: bool, template: dict) -> QColor:
        if not name:
            return QColor(Qt.GlobalColor.white)
        key = name.lower()
        if key == "blue":
            return self._team_color_value(team_is_yellow)
        palette = template.get("palette", {})
        if key in palette:
            return palette[key]
        if key.startswith("#"):
            return QColor(key)
        return QColor(Qt.GlobalColor.white)

    def _draw_background(self, painter: QPainter, template: dict, team_is_yellow: bool) -> None:
        radius = template["background"]["radius"]
        color_key = template["background"].get("color", "black")
        color = self._resolve_color(color_key, team_is_yellow, template)
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(color)
        circle_rect = QRectF(-radius, -radius, radius * 2.0, radius * 2.0)
        path = QPainterPath()
        path.addEllipse(circle_rect)
        cut_y = template["background"].get("cut_y_offset", 0.0)
        if cut_y > 0.0:
            cut_rect = QRectF(-radius - 5.0, cut_y, radius * 2.0 + 10.0, radius + 10.0)
            cut_path = QPainterPath()
            cut_path.addRect(cut_rect)
            path = path.subtracted(cut_path)
        painter.drawPath(path)
