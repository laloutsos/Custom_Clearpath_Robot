from setuptools import find_packages
from setuptools import setup

setup(
    name='clearpath_motor_msgs',
    version='2.7.0',
    packages=find_packages(
        include=('clearpath_motor_msgs', 'clearpath_motor_msgs.*')),
)
