"""General launch entry point for the framework interface stack."""

from pathlib import Path

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    # Vision node arguments
    vision_args = [
        ("bind_address", "0.0.0.0", "Address used for the UDP socket bind()"),
        ("port", "10006", "UDP port for SSL-Vision packets"),
        ("multicast", "224.5.23.2", "Multicast group address"),
        ("interface_address", "0.0.0.0", "Interface IP for multicast subscription"),
        ("poll_period_s", "0.002", "Timer period for polling the UDP socket"),
        ("publish_period_s", f"{1.0/120.0:.6f}", "Period between world state publishes"),
        ("publish_rate_hz", "120.0", "Minimum world state publish rate"),
        ("merge_timeout_s", "0.03", "Timeout before merging incomplete frames"),
        ("gc_timeout_s", "0.5", "Garbage collection timeout for stale frames"),
        ("friendly_color", "yellow", "Team colour treated as friendly (yellow/blue)"),
        ("expected_cameras", "4", "Expected number of camera IDs"),
    ]

    vision_launch_args = [
        DeclareLaunchArgument(f"vision_{name}", default_value=default, description=desc)
        for name, default, desc in vision_args
    ]

    vision_params = [
        {name: LaunchConfiguration(f"vision_{name}")} for name, *_ in vision_args
    ]

    # TF broadcaster arguments
    tf_args = [
        ("world_topic", "vision/world_state", "World state topic to subscribe"),
        ("fixed_frame", "map", "Fixed/global frame name"),
        ("sensor_frame", "vision", "Sensor frame name"),
        ("publish_static_tf", "true", "Whether to publish map->vision static TF"),
        ("static_tf_x", "0.0", "Static TF X offset"),
        ("static_tf_y", "0.0", "Static TF Y offset"),
        ("static_tf_yaw", "0.0", "Static TF yaw (rad)"),
        ("publish_ball", "true", "Publish ball TF frames"),
        ("publish_robots", "true", "Publish robot TF frames"),
        ("blue_prefix", "blue_", "Frame prefix for blue robots"),
        ("yellow_prefix", "yellow_", "Frame prefix for yellow robots"),
        ("field_line_width", "0.01", "RViz marker line width (m)"),
        ("field_publish_period_s", "1.0", "Throttle for field marker publishing"),
        ("draw_center_circle", "true", "Render the center circle marker"),
        ("center_circle_radius", "0.5", "Center circle radius fallback (m)"),
    ]

    tf_launch_args = [
        DeclareLaunchArgument(f"tf_{name}", default_value=default, description=desc)
        for name, default, desc in tf_args
    ]

    tf_params = [
        {name: LaunchConfiguration(f"tf_{name}")} for name, *_ in tf_args
    ]

    gui_params = [
        {"friendly_color": LaunchConfiguration("vision_friendly_color")},
        {"detection_topic": LaunchConfiguration("vision_detection_topic")},
        {"geometry_topic": LaunchConfiguration("vision_geometry_topic")},
        {"path_preview_topic": LaunchConfiguration("navigation_path_preview_topic")},
        {"robot_target_topic": LaunchConfiguration("behavior_target_topic")},
        {"navigation_get_service": LaunchConfiguration("navigation_get_service")},
        {"navigation_set_service": LaunchConfiguration("navigation_set_service")},
        {"robot_command_service": LaunchConfiguration("robot_command_service")},
    ]

    nav_service_args = [
        DeclareLaunchArgument(
            "navigation_get_service",
            default_value="/navigation_manager/get_navigation_config",
            description="Service used to fetch navigation config",
        ),
        DeclareLaunchArgument(
            "navigation_set_service",
            default_value="/navigation_manager/set_navigation_config",
            description="Service used to update navigation config",
        ),
    ]

    robot_service_arg = DeclareLaunchArgument(
        "robot_command_service",
        default_value="/robot_commander/send_robot_command",
        description="Service used to send robot commands",
    )

    gui_topic_args = [
        DeclareLaunchArgument(
            "vision_detection_topic",
            default_value="vision/detection",
            description="Detection topic consumed by the GUI",
        ),
        DeclareLaunchArgument(
            "vision_geometry_topic",
            default_value="vision/geometry",
            description="Geometry topic consumed by the GUI",
        ),
        DeclareLaunchArgument(
            "behavior_target_topic",
            default_value="behavior/robot_target",
            description="Target topic sent from behaviors to navigation",
        ),
        DeclareLaunchArgument(
            "navigation_path_preview_topic",
            default_value="navigation/path_preview",
            description="Navigation path preview topic",
        ),
    ]

    robot_args = [
        DeclareLaunchArgument(
            "robot_command_host",
            default_value="127.0.0.1",
            description="Host for the robot UDP control port",
        ),
        DeclareLaunchArgument(
            "robot_command_port",
            default_value="10302",
            description="Port for the robot UDP control port",
        ),
        DeclareLaunchArgument(
            "robot_replacement_host",
            default_value="127.0.0.1",
            description="Host for grSim replacement packets (teleport). Leave as host if unused.",
        ),
        DeclareLaunchArgument(
            "robot_replacement_port",
            default_value="0",
            description="Port for replacement packets (0 reuses command port).",
        ),
    ]

    robot_params = [
        {"host": LaunchConfiguration("robot_command_host")},
        {"port": LaunchConfiguration("robot_command_port")},
        {"replacement_host": LaunchConfiguration("robot_replacement_host")},
        {"replacement_port": LaunchConfiguration("robot_replacement_port")},
    ]

    vision_node = Node(
        package="vision_receiver_package",
        executable="vision_receiver",
        name="vision_receiver",
        output="screen",
        parameters=vision_params,
    )


    tf_node = Node(
        package="gui_package",
        executable="world_tf_broadcaster",
        name="world_tf_broadcaster",
        output="screen",
        parameters=tf_params,
    )

    gui_node = Node(
        package="gui_package",
        executable="framework",
        name="framework",
        output="screen",
        parameters=gui_params,
    )

    path_visualizer_node = Node(
        package="gui_package",
        executable="path_preview_visualizer",
        name="path_preview_visualizer",
        output="screen",
        parameters=[
            {"path_preview_topic": LaunchConfiguration("navigation_path_preview_topic")},
            {"frame_id": LaunchConfiguration("tf_fixed_frame")},
        ],
    )

    robot_node = Node(
        package="robot_communication_package",
        executable="robot_commander",
        name="robot_commander",
        output="screen",
        parameters=robot_params,
    )

    navigation_manager_node = Node(
        package="navigation_package",
        executable="navigation_manager_node",
        name="navigation_manager",
        output="screen",
    )

    navigation_node = Node(
        package="navigation_package",
        executable="navigation_node",
        name="navigation_node",
        output="screen",
        parameters=[
            {"world_topic": LaunchConfiguration("tf_world_topic")},
            {"target_topic": LaunchConfiguration("behavior_target_topic")},
            {"path_preview_topic": LaunchConfiguration("navigation_path_preview_topic")},
            {"robot_command_service": LaunchConfiguration("robot_command_service")},
            {"navigation_get_service": LaunchConfiguration("navigation_get_service")},
        ],
    )

    rviz_config = str(Path(__file__).resolve().parent.parent / ".ros" / "config.rviz")
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        arguments=["-d", rviz_config],
        output="screen",
    )

    launch_items = (
        vision_launch_args
        + tf_launch_args
        + nav_service_args
        + gui_topic_args
        + [robot_service_arg]
        + robot_args
        + [
            navigation_manager_node,
            navigation_node,
            vision_node,
            robot_node,
            gui_node,
            path_visualizer_node,
            tf_node,
            rviz_node,
        ]
    )
    return LaunchDescription(launch_items)
