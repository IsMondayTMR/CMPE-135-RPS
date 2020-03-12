#ifndef BOT_H
#define BOT_H

#include "Player.h"
#include "RandomChoice.h"
#include "SmartChoice.h"
#include <iostream>
using namespace std;

class Bot
{
private:
	int choice;
public:
	int getChoice();
	void setChoice(int value);
	virtual void pick();
};

#endif
