#ifndef BOT_H
#define BOT_H

#include "Player.h"
#include <iostream>
using namespace std;

class Bot : public Player
{
private:
	int choice;
public:
	void pick();
};

#endif
