#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>
using namespace std;

class Human : public Player
{
private:
	int choice;
public:
	void pick();
};

#endif