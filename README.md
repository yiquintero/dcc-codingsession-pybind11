# DCC Coding Session: Pybind11 and CMake

This repo contains the materials for the DCC Coding Session on Pybind11 and CMake that took place on the 14th of April 2023.

The first part of the session discusses how to combine Python and C++ using [pybind11](https://pybind11.readthedocs.io/en/stable/index.html). An example of a Python wrapper for a C++ library is included in this repo on the pymymath directory.

The second part of the coding session is a quick introduction to [CMake](https://cmake.org/). An example of how to build a C++ application with CMake is included in the mymathapp directory of the repo.

## pybind11 - pymymath

Requirements: pip, python 3.5+ and (maybe) g++ and gcc compilers

To build:
```
git clone git@github.com:yiquintero/dcc-codingsession-pybind11.git
cd dcc-codingsession-pybind11
pip instal ./pymymath
```

## CMake - mymathapp

Requirements: CMake and a c++ compiler (preferably GNU for Linux or Visual Studio for Windows)

To build & run:
```
git clone git@github.com:yiquintero/dcc-codingsession-pybind11.git
cd dcc-codingsession-pybind11/mymathapp
mkdir build
cd build
cmake ..
./mymathapp
```
