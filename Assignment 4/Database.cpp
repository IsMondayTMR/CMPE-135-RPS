#include "Database.h"

void Database::recordChoice(int choice)
{
	for (int i = 0; i < 5; i++)
	{
		if (i < 4)
		{
			if (previousChoice[i] == 3)
			{
				previousChoice[i] = choice;
				break;
			}
		}
		else if (i == 4)
		{
			previousChoice[i] = choice;
		}
	}
}

int Database::sendSequence()
{
	string SequenceString;
	for (int i = 0; i < 5; i++)
	{
		SequenceString += to_string(previousChoice[i]);
	}
	int Sequence = stoi("SequenceString");
	return Sequence;
}