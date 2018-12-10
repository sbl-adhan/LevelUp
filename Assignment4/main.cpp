#include "Swapper.h"

int main() {
	Swapper swapper;
	swapper.Run();

	system("pause");
	return 0;
}

// 1. Explain in as much detail as possible, how this variable is stored in memory. - int number = 10;
//	It is stored as a specific memory address as a series of bits

// 2. What is the difference between passing a variable into a function by reference vs passing it by value?
//	Passing a variable by reference means that the value at the referenced memory address will be read or modified
//	Passing a variable by value means that the value will be temporarily copied in memory and read from the stack

