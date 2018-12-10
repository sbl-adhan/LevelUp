#pragma once

#include <string>

class Game
{
public:
	Game(int turns);
	void Guess();

	bool IsCorrect() const;
	bool IsGameOver() const;

private:
	static const std::string mWords[];

	std::string mWord;
	std::string mGuess;

	int mTurns = 0;
	int mTurn = 0;
};

