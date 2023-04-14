#include "mymath.h"
#include <iostream>
#include <exception>
#include <limits>

float mymath::add(float a, float b) {
	return a+b;
}

float mymath::subtract(float a, float b) {
	return a-b;
}

float mymath::divide(float a, float b) {
 	if (b < std::numeric_limits<float>::epsilon()) {
		std::string msg = "Cannot divide " + std::to_string(a) + " by " + std::to_string(b);
		throw std::runtime_error(msg);
	}
	else {
		return a/b;
	}
}
