from setuptools import setup
from glob import glob

package_name = 'precision_positioning_control'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/config', glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ROS2 Engineer',
    maintainer_email='engineer@robotics.org',
    description='Precision Positioning Control Package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pid_controller_node = precision_positioning_control.pid_controller_node:main',
            'encoder_simulator_node = precision_positioning_control.encoder_simulator_node:main',
        ],
    },
)
