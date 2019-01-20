#include "CustomClass.h"
#include <iostream>

void PrintArray(char* myArray) {
	while (*myArray) {
		std::cout << *myArray;
		*myArray++;
	}
	std::cout << std::endl;
}

void ReverseArray(char* myArray, int sizeOfArray) {
	std::cout << "Before ";
	PrintArray(myArray);

	int lastIndex = sizeOfArray - 1;
	while (!myArray[lastIndex]) {
		lastIndex--;
	}
	int sizeWithoutNullTerm = lastIndex + 1;

	for (int firstIndex = 0; firstIndex < sizeWithoutNullTerm/2; firstIndex++, lastIndex--) {
		char tmp = myArray[firstIndex];
		myArray[firstIndex] = myArray[lastIndex];
		myArray[lastIndex] = tmp;
	}

	std::cout << "After ";
	PrintArray(myArray);
}

int main() {

	char myChars[] = { 'c', 'a', 't', '\0' };
	int sizeOfMyChars = sizeof(myChars) / sizeof(char);
	int oneThousandInts[10000];
	for (int i = 0; i < 10000; i++) {
		oneThousandInts[i] = i;
	}

	CustomClass* customClass = new CustomClass();

	ReverseArray(myChars, sizeOfMyChars);

	system("pause");
	return 0;
}