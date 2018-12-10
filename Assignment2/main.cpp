#include <iostream>
#include <string>
#include <bitset>

void PrintALoop(int start, int end) {
	for (int number = start; number <= end; number++) {
		std::cout << number << std::endl;
	}
}

void PrintDoWhileLoop() {
	int number = 0;
	int input = 0;
	do {
		std::cout << number << std::endl;
		std::cout << "(Do While) Continue? ";
		// This goes berserk if the user inputs a non-integer but we won't handle the fail case for the assignment.
		std::cin >> input;
		number++;
	} while (input != 0);
}

void PrintWhileLoop() {
	int number = 0;
	int input = 1;
	while (input == 1) {
		std::cout << "(While) Continue? ";
		// This goes berserk if the user inputs a non-integer but we won't handle the fail case for the assignment.
		std::cin >> input;
		if (input != 1) {
			break;
		}
		std::cout << number << std::endl;
		number++;
	}
}

int main() {
	PrintALoop(0, 50);
	PrintDoWhileLoop();
	PrintWhileLoop();
	
	int bigNumber = 504530;
	std::cout << bigNumber << " - " << std::bitset<32>(bigNumber) << std::endl;
	
	std::string string = "There is no spoon!";
	for (int i = 0; i < string.length(); i++) {
		char character = string[i];
		std::cout << "'" << character << "' - " << int(character) << " - " << std::bitset<8>(character) << std::endl;
	}

	system("pause");
	return 0;
}
