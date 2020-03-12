#include <iostream>
#include <stdlib.h>
#include "Human.h"
#include "Bot.h"
#include "Game.h"
#include "RandomChoice.h"
#include "SmartChoice.h"

using namespace std;

int main()
{
	Game game;
	char endgame;
	game.play();
	cout << "Enter anything to close game" << endl;
	cin >> endgame;
	return 0;
}