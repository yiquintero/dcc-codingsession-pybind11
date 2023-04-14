# Available at setup time due to pyproject.toml
from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup


ext_modules = [
    Pybind11Extension("pymymath",
        ["src/bindings.cpp", "mymath/mymath.cpp"],
        include_dirs=["./mymath/"]
    )
]


setup(
    name="pymymath",
    version="0.0.1",
    author="Yasel Quintero",
    author_email="y.i.quinterolares@tudelft.nl",
    url="https://github.com/yiquintero/dcc-codingsession-pybind11",
    description="Example of a Python wrapper for C++ code built using pybind11",
    ext_modules=ext_modules,
    python_requires=">=3.7",
    cmdclass={"build_ext": build_ext}
)