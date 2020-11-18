from setuptools import setup

package_name = 'dec_to_oct_hex'

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
    description='Converting Decimal to Octal and Hexadecimal',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'talker = dec_to_oct_hex.publisher:main',
                'listener = dec_to_oct_hex.subscriber:main',
        ],
    },
)
