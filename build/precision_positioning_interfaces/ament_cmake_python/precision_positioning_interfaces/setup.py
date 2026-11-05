from setuptools import find_packages
from setuptools import setup

setup(
    name='precision_positioning_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('precision_positioning_interfaces', 'precision_positioning_interfaces.*')),
)
