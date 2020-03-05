#include "Game.h"

void Game::play()
{
	round = 20;
	for (int i = 0; i < round; i++)
	{
		cout << "Round " << i + 1 << endl;
		human.pick();
		bot.pick();
		printResult(result(human.getChoice(), bot.getChoice()));
	}
	cout << "Game Over!" << endl;
}

int Game::result(int humanChoice, int botChoice)
{
	if (humanChoice == botChoice)
	{
		return 0;
	}
	else if ((humanChoice == 0) && (botChoice == 2))
	{
		return 1;
	}
	else if ((humanChoice == 1) && (botChoice == 0))
	{
		return 1;
	}
	else if ((humanChoice == 2) && (botChoice == 1))
	{
		return 1;
	}
	else
	{
		return 2;
	}
}

void Game::printResult(int result)
{
	if (result == 0)
	{
		cout << "Draw!" << endl;
	}
	else if (result == 1)
	{
		cout << "You win!" << endl;
	}
	else
	{
		cout << "You lose!" << endl;
	}
}