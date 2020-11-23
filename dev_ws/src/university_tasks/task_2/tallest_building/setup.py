from setuptools import setup

package_name = 'tallest_building'

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
    maintainer='Arthur Strekozov',
    maintainer_email='Artyrrr08@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'server = tallest_building.service_function:main',
                'client = tallest_building.client_function:main',
        ],
    },
)
