// CMPE-135-Assignment-3-RPS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Player
{
private:
	int choice;
public:
	int getChoice();
	virtual void pick();
	void setChoice(int value);
};

int Player::getChoice()
{
	return choice;
}

void Player::pick()
{
}

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
};

void Game::play()
{
	round = 20;
	for (int i = 0; i < round; i++)
	{
		human.pick();
		bot.pick();
		result(human.getChoice, bot.getChoice);
	}
}

int Game::result(int humanChoice, int botChoice)
{
	if (humanChoice == botChoice)
	{

	}

}

int main()
{

    return 0;
}

