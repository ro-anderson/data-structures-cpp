#include <iostream>

int main(){

	int number1;
	int number2;

	std::cout << "type number1: ";
	std::cin >> number1;
	std::cout << "type number2: "; 
	std::cin >> number2;

	int sum = number1 + number2;
	int sub = number1 - number2;
	int mul = number1 * number2;
	int div = number1 / number2;
	float fdiv = (float)number1 / (float)number2;
	int res = number1 % number2;


	std::cout << "\nsum \n" << sum << std::endl;
	std::cout << "\nsub \n" << sub << std::endl;
	std::cout << "\nmul \n" << mul << std::endl;
	std::cout << "\ndiv \n" << div << std::endl;
	std::cout << "\nfdiv \n" << fdiv << std::endl;
	std::cout << "\nres \n" << res << std::endl;
}
