#include "Human.h"

void Human::pick()
{
	cout << "1 = Paper, 2 = Scissors, 3 = Rock: ";
	cin >> choice;
	choice -= 1;
	setChoice(choice);
}