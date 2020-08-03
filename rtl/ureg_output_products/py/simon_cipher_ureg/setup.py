# Always prefer setuptools over distutils
from setuptools import setup

setup(
    name='simon_cipher_ureg',                                                                # Required
    version='0.0.0',                                                                   # Required
    description='An installable python package with registers defined in simon_cipher_ureg', # Optional
    long_description=long_description,                                                 # Optional
    long_description_content_type='text/markdown',                                     # Optional (see note above)
    python_requires='>=3.5.*, <4',                                                     # Optional
    setup_requires=['wheel'],
    install_requires=['wheel']
)
