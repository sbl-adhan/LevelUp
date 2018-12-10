#include "Game.h"
#include <iostream>
#include <ctime>

const std::string Game::mWords[5] = {
	"Chicken",
	"Duck",
	"Cow",
	"Goose",
	"Donkey"
};

Game::Game(int turns)
	: mTurns(turns)
{
	time_t timer;
	int numWords = sizeof(mWords) / sizeof(mWords[0]);
	int randomIndex = time(&timer) % numWords;

	mWord = mWords[randomIndex];
}

void Game::Guess()
{
	size_t wordLength = mWord.length();
	int turnsRemaining = mTurns - mTurn;

	std::string guess;
	std::cout << "(Turns - " << turnsRemaining << ") Can you guess the " << wordLength << " letter word I am thinking of?" << std::endl;
	std::cout << "Guess: ";
	std::cin >> guess;

	size_t guessLength = guess.length();
	std::string result = "";
	for (int i = 0; i < wordLength; i++) {
		char nextChar = '_';
		if (i < guessLength) {
			char letter = mWord[i];
			if (letter == guess[i]) {
				nextChar = letter;
			}
		}
		result += nextChar;
	}

	std::cout << result << std::endl;

	mGuess = guess;
	mTurn++;
}

bool Game::IsCorrect() const
{
	return mGuess == mWord;
}

bool Game::IsGameOver() const
{
	return mTurn >= mTurns || IsCorrect();
}
