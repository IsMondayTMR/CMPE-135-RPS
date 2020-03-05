#include <iostream>
#include <stdlib.h>
using namespace std;

class Player
{
private:
	int choice;
public:
	int getChoice();
	// virtual void pick();
	void setChoice(int value);
};

int Player::getChoice()
{
	return choice;
}

/* void Player::pick()
{
} */

void Player::setChoice(int value)
{
	choice = value;
}

class Human : public Player
{
private:
	int choice;
public:
	void pick();
};

void Human::pick()
{
	cout << "1 = Paper, 2 = Scissors, 3 = Rock: ";
	cin >> choice;
	choice -= 1;
	setChoice(choice);
}

class Bot : public Player
{
private:
	int choice;
public:
	void pick();
};

void Bot::pick()
{
	choice = rand() % 3;
	setChoice(choice);
	if (choice == 0)
	{
		cout << "Your opponent picked Paper!" << endl;
	}
	else if (choice == 1)
	{
		cout << "Your opponent picked Scissors!" << endl;
	}
	else if (choice == 2)
	{
		cout << "Your opponent picked Rock!" << endl;
	}
}

class Game
{
private:
	int round;
	Human human;
	Bot bot;
public:
	void play();
	int result(int humanChoice, int botChoice);
	void printResult(int result);
};

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

int main()
{
	Game game;
	char endgame;
	game.play();
	cout << "Enter anything to close game" << endl;
	cin >> endgame;
    return 0;
}

