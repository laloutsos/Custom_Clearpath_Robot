from setuptools import find_packages
from setuptools import setup

setup(
    name='clearpath_platform_msgs',
    version='2.7.0',
    packages=find_packages(
        include=('clearpath_platform_msgs', 'clearpath_platform_msgs.*')),
)
