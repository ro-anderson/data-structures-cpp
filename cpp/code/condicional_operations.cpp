#include <iostream>

int main(){

	int number1;
	int number2;

	std::cout << "type number1: " << std::endl ;
	std::cin >> number1;
	std::cout << "type number2: " << std::endl; 
	std::cin >> number2;

	if (number1 != number2)
		std::cout << "\n" << number1 << " != " << number2 << "\n" << std::endl;

	if (number1 < number2) {
		std::cout << "\n" << number1 << "  < " << number2 << "\n" << std::endl;
	} else if (number1 > number2) {

		std::cout << "\n"<< number1 << "  > " << number2 << "\n" << std::endl;
	} else {
		std::cout << "\n"<< number1 << "  == " << number2 << "\n" << std::endl;
	}		

}
