// 1. Explain the difference between a regular C++ enumeration and a scoped C++ enumeration?
//		- Which is better and why?
// 
// Unscoped enumerations can be accessed without the scoped resolution operator.
// Scoped enums are better because they prevent potential name clashes with other variables.

// What do the keywords break and continue do?
// 
// break - Stops evaluation within a loop and leaves the current scope
// continue - Stops evaluation of the current iteration within a loop but stays within the scope of the loop

#include <iostream>

void MultiPrint(int printAmount, char printCharacter) {
	for (int i = 0; i < printAmount; ++i) {
		std::cout << printCharacter;
	}
	std::cout << std::endl;
}

float Distance(float x1, float y1, float x2, float y2) {
	return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

void SomeFunction(int x, int y) {
	int p = x * y;
	int s = x + y;
	int total = (2 * s) + p * (s - x) * (p + y);
	std::cout << "Total: " << total << std::endl;
}

int main() {
	MultiPrint(2, 'a');
	std::cout << "Distance: " << Distance(1, 1, 2, 2) << std::endl;
	SomeFunction(1, 2);
	system("pause");
	return 0;
}