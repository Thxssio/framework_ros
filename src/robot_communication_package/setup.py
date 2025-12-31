from setuptools import setup

package_name = 'robot_communication_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='thxssio',
    maintainer_email='thxssio@gmail.com',
    description='UDP control client for grSim with ROS service interface.',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_commander = robot_communication_package.robot_commander_node:main',
        ],
    },
)
