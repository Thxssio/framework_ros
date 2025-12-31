from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_communication_package',
    version='0.0.0',
    packages=find_packages(
        include=('robot_communication_package', 'robot_communication_package.*')),
)
