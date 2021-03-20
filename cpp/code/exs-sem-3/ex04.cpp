
#include <iostream>

int main(){
    int* intPointer;
    int alpha;
    
    alpha = 3;
    intPointer = &alpha;

	std::cout << "intPointer: "<< intPointer << "\n"<< std::endl;
    std::cout << "alpha: "<< alpha << "\n"<< std::endl;


    alpha = 4;
	std::cout << "mudando alpha = 4"<< std::endl;
	std::cout << "*intPointer: "<< *intPointer << "\n"<< std::endl;
	std::cout << "intPointer: "<< intPointer << "\n"<< std::endl;
    std::cout << "alpha: "<< alpha << "\n"<< std::endl;


    *intPointer = 5;
	std::cout << "mudando intPointer = 5"<< std::endl;
	std::cout << "*intPointer: "<< *intPointer << "\n"<< std::endl;
	std::cout << "intPointer: "<< intPointer << "\n"<< std::endl;
    std::cout << "alpha: "<< alpha << "\n"<< std::endl;
	return 0;
}
