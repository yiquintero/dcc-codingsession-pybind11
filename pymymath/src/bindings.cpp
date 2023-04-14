#include "mymath.h"
#include <pybind11/pybind11.h>

PYBIND11_MODULE(pymymath, m){
	m.doc() = "Python wrapper for the C++ MyMath library";
	m.def("add", &mymath::add);
	m.def("subtract", &mymath::subtract);
	m.def("divide", &mymath::divide);
}