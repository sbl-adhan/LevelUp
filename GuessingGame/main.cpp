#include "Game.h"
#include <iostream>

bool PlayGame() {
	const int numberOfTurns = 3;

	Game game(numberOfTurns);
	while (!game.IsGameOver()) {
		game.Guess();
	}

	std::string message;
	if (game.IsCorrect()) {
		message = "You win!";
	}
	else {
		message = "You lose!";
	}
	std::cout << message << std::endl << "Would you like to play again? (y/n)" << std::endl;
	std::string confirm;
	std::cin >> confirm;
	return confirm == "y";
}

int main() {
	bool continueGame = false;
	do {
		continueGame = PlayGame();
	} while (continueGame);

	system("pause");
	return 0;
}