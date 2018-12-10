#include "Swapper.h"
#include <iostream>

Swapper::Swapper()
{
}

void Swapper::Run()
{
	int int1 = 1;
	int int2 = 2;
	bool bool1 = false;
	bool bool2 = true;
	std::string string1 = "Hello";
	std::string string2 = "Goodbye";

	std::cout << int1 << " - " << int2 << std::endl;
	std::cout << bool1 << " - " << bool2 << std::endl;
	std::cout << string1 << " - " << string2 << std::endl;

	Swap(int1, int2);
	Swap(bool1, bool2);
	Swap(string1, string2);

	std::cout << int1 << " - " << int2 << std::endl;
	std::cout << bool1 << " - " << bool2 << std::endl;
	std::cout << string1 << " - " << string2 << std::endl;
}

void Swapper::Swap(int& int1, int& int2) {
	int tmp = int1;
	int1 = int2;
	int2 = tmp;
}

void Swapper::Swap(bool& bool1, bool& bool2) {
	bool tmp = bool1;
	bool1 = bool2;
	bool2 = tmp;
}

void Swapper::Swap(std::string& string1, std::string& string2) {
	std::string tmp = string1;
	string1 = string2;
	string2 = tmp;
}