// Interface for mymath library
#pragma once

namespace mymath {

	/*
	 * @brief Adds two numbers
	 * @param[in] a,b  the two numbers to add
	 * @return sum of a and b
	*/
	float add(float a, float b);

	/*
	 * @brief Substracts two numbers
	 * @param[in] a,b  the two numbers to subtract
	 * @return subtraction of a and b
	*/
	float subtract(float a, float b);
	
	/*
	 * @brief Divides two numbers
	 * @param[in] a  dividend (numerator)
	 * @param[in] b  divisor (denominator)
	 * @return  division of a by b
	*/
	float divide(float a, float b);

}
