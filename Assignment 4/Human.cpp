#include "Human.h"

int Human::getChoice()
{
	return choice;
}

void Human::setChoice(int value)
{
	choice = value;
}

void Human::pick()
{
	cout << "1 = Paper, 2 = Scissors, 3 = Rock: ";
	cin >> choice;
	choice -= 1;
	setChoice(choice);
}