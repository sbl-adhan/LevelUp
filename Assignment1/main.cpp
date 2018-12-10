#include <iostream>

int GetNumberFromInput() {
	int number = 0;
	std::cout << "Choose a number: ";
	std::cin >> number;
	return number;
}

void PrintNumber(int number) {
	std::cout << number << std::endl;
}

int MulitplyNumbers(int number1, int number2, int number3) {
	return number1 * number2 * number3;
}

int AddNumbers(int number1, int number2, int number3) {
	return number1 + number2 + number3;
}

int main() {
	int number1 = GetNumberFromInput();
	PrintNumber(number1);

	int number2 = GetNumberFromInput();
	PrintNumber(number2);

	int number3 = GetNumberFromInput();
	PrintNumber(number3);

	int multiplied = MulitplyNumbers(number1, number2, number3);
	PrintNumber(multiplied);

	int added = AddNumbers(number1, number2, number3);
	PrintNumber(added);

	system("pause");
	return 0;
}

// 5. What are two ways to write comments?
//	Single line comment
/*
	Block comment
*/

// 6. What does self commenting code mean?
//	-Functions and variables that have descriptive names
//	-Code that is structured for readability

// 7. What is the difference between a string and a string literal?
//	string is a class with functionality for working with character arrays
//	string literals are character arrays with a built in null terminator

// 8. Why do we not use CamelCase for the main() function?
//	C++ programs always require a lower case main function as their entry point

// 9. What namespace contains cout, cin and string?
//	iostream for cout, cin
//	string for string

// 10. What does the preprocessor directive #include actually do?
//	Copies the contents of the included file during the preprocessor step of compilation

// 11. What is the danger of this statement: using namespace std;
//	Everything within the std namespace will be accessible in the local scope without the use of std::
//	There is potential for name clashes with your own variables or functions

// 12. What is Pseudo Code, and why do we do it?
//	Allows us to write a program's logic that is language agnostic