# DCC Coding Session: Pybind11 and CMake

This repo contains the materials for the DCC Coding Session on Pybind11 and CMake that took place on the 14th of April 2023.

The first part of the session discusses how to combine Python and C++ using [pybind11](https://pybind11.readthedocs.io/en/stable/index.html). An example of a Python wrapper for a C++ library is included in this repo on the pymymath directory.

The second part of the coding session is a quick introduction to [CMake](https://cmake.org/). An example of how to build a C++ application with CMake is included in the mymathapp directory of the repo.

## pybind11 example

An example of a Python module that serves as a wrapper for C++ code is included in the pymymath directory. The C++ source code is located in the pymypath/mymath directory and the python bindings are in the file pymymath/src/binding.cpp.

Requirements: pip, python 3.5+ and (maybe) g++ and gcc compilers.

To build the pymymath python module:
```console
git clone git@github.com:yiquintero/dcc-codingsession-pybind11.git
cd dcc-codingsession-pybind11
pip install ./pymymath
```

To use the newly created python module launch the python interpreter, import the module and call the functions.
```console
python
>>import pymymath
>>pymymath.add(5,3)
>>8.0
```

## CMake example

An example of a C++ app that is built with CMake is included in the mymathapp directory.

Requirements: CMake and a C++ compiler (preferably GNU for Linux or Visual Studio for Windows)

To build & run:
```console
git clone git@github.com:yiquintero/dcc-codingsession-pybind11.git
cd dcc-codingsession-pybind11/mymathapp
mkdir build
cd build
# Configure the CMake project (CMake will check dependencies are installed, detect OS, compiler, etc.)
cmake ..
# As a result of the previous command CMake will build the build system's build files. 
# The default is Makefiles for Linux and Visual Studio project/solution files on Windows.
# On Linux, we can simply type 'make' to build the app:
make
# And to test it:
./mymathapp
```

## Useful links

Some useful links that came up whilst preparing the contents of the session:

- Python and C++ integration:
  - [Thinking Hybrid: python/c++ Integration - a Slideshare presentation](https://www.slideshare.net/XEmacs/thinking-hybrid-pythonc-integration)
  - [Python calling C++ - a BlueYonder blog post](https://tech.blueyonder.com/python-calling-c++/)
  - [Scientific Programming in Python with C++ extensions - an article by Sam Thompson](https://thompsonsed.co.uk/scientific-programming-in-python-with-c-extensions)
- pybind11
  - [C++ in Python the Easy Way! - a very useful Youtube video on how to use pybind11](https://youtu.be/_5T70cAXDJ0)
  - [Using pybind11 - part of a 'Computational Statistics in Python' course from Duke University](https://people.duke.edu/~ccc14/cspy/18G_C++_Python_pybind11.html)
  - ['Pybind11 - Python on Steroids' by Jan Plhak - a video from CppCon 2017](https://www.youtube.com/watch?v=uM1QQXekhpo)
  - ['Introduction to C++ python extensions and embedding Python in C++ Apps' by Diego Rodriguez-Loasada - a video from CppCon2016](https://youtu.be/bJq1n4gQFfw)
  - [Pybind11 - SciPy 2021 - a Slideshare presentation](https://www.slideshare.net/HenrySchreiner/pybind11-scipy-2021)
  - [Easing Customer Access With pybind11 - blog post by HD Vision Systems](https://www.hdvisionsystems.com/en/blog/pybind11-easing-access/)
- CMake
  - [Carpentry tutotial](https://hsf-training.github.io/hsf-training-cmake-webpage/index.html)
- C++
  - [A set (playlist) of Youtube videos by TheCherno that teaches the basics of C++](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)
  - [Comparing Floating Point Numbers - an insightful article from the Random ASCII blog](https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/)