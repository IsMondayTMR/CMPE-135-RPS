#ifndef PLAYER_H
#define PLAYER_H

class Player
{
protected:
	int choice;

public:
	int getChoice();
	// virtual void pick();
	void setChoice(int value);
};

#endif