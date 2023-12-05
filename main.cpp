#include <iostream>
#include "calculator.h"


int main() {
	Calculator calculator;

	double add_result = calculator.Add(11.0, 12.0);
	double sub_result = calculator.Sub(11.0, 12.0);

	std::cout << "Laboratory work No. 4 from system programming" << std::endl;
	std::cout << "Autor: IO-11 Kudelia Sasha" << std::endl;
	std::cout << "Result of the Add function with parameters (11.0, 12.0): " << add_result << std::endl;
	std::cout << "Result of the Sub function with parameters (11.0, 12.0): " << sub_result << std::endl;

	return 0;
}
