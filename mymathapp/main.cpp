#include "mymath.h"
#include <iostream>

int main(){

	// Add
	std::cout << "Add 5 and 3. Result: " << mymath::add(5,3) << std::endl;	

	// Subtract
	std::cout << "Subtract 3 from 5. Result: " << mymath::subtract(5,3) << std::endl;	

	// Divide
	try {
		std::cout << "Divide 5 by 3. Result: " << mymath::divide(5,3) << std::endl;	
		std::cout << "Divide 5 by 0. Result: " << mymath::divide(5,0) << std::endl;
	} 
	catch(std::runtime_error err) {
		std::cout << "ERROR!\nMessage: " << err.what();
	}

}
