from setuptools import setup, Extension, find_packages

# Define the extension module
calc_extension = Extension('fibo_testpypi2._calc', sources=['src/fibo_testpypi2/_calc.c'])

setup(
    packages=find_packages(where="src"),
    package_dir={"": "src"},
    ext_modules=[calc_extension],
    # include any other setup kwargs here
)

