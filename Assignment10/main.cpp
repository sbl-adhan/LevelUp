#include "FloatArray.h"
#include <iostream>

int main() {
	FloatArray* arr = new FloatArray();
	arr->Add(2.5f);
	arr->Add(4.65f);
	arr->Add(73.21f);
	std::cout << arr->Get(0) << std::endl;
	std::cout << arr->Get(1) << std::endl;
	std::cout << arr->Get(2) << std::endl;
	arr->Remove(1);
	std::cout << arr->Get(0) << std::endl;
	std::cout << arr->Get(1) << std::endl;

	system("pause");
	return 0;
}