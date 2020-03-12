#ifndef BOT_H
#define BOT_H

#include "Player.h"
#include <iostream>
using namespace std;

class Bot{
	
protected:
	int choice;

public:
	int getChoice();
	void setChoice(int value);
	virtual void pick() =0;
};

#endif
