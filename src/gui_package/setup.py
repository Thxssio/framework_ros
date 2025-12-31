from setuptools import find_packages, setup

package_name = 'gui_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    package_data={
        'gui_package': [
            'teams/*.json',
        ],
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    include_package_data=True,
    zip_safe=False,
    maintainer='thxssio',
    maintainer_email='thxssio@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'world_tf_broadcaster = gui_package.world_tf_broadcaster:main',
            'framework = gui_package.gui_interface:main',
            'path_preview_visualizer = gui_package.path_preview_visualizer:main',
        ],
    },
)
