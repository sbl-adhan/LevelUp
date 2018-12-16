#include "MyClass.h"
#include <iostream>

void MyClass::DontEnterFive()
{
	int input;
	do {
		std::cout << "Enter a number other than 5: ";
		std::cin >> input;
	} while (input != 5);

	std::cout << "You weren't supposed to enter 5!" << std::endl;
}

void MyClass::ThatsEnough()
{
	int input;
	int inputCount = 0;
	do {
		std::cout << "Enter a number other than 5: ";
		std::cin >> input;
		++inputCount;
	} while (input != 5 && inputCount < 10);

	if (inputCount < 10) {
		std::cout << "You weren't supposed to enter 5!" << std::endl;
	}
	else {
		std::cout << "Fine, you win..." << std::endl;
	}
}

void MyClass::DontEnterIterationNumber()
{
	int input;
	int inputCount = -1;
	do {
		++inputCount;
		std::cout << "Enter a number other than " << inputCount << ": ";
		std::cin >> input;
	} while (input != inputCount);

	std::cout << "You weren't supposed to enter " << inputCount << "!" << std::endl;
}
