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
			if (previousChoice[i] == 3)
			{
				previousChoice[i] = choice;
			}
			else
			{
				int temp[4];
				for (int j = 1; j < 4; j++)
				{
					temp[j - 1] = previousChoice[j];
				}
				for (int j = 0; j < 3; j++)
				{
					previousChoice[j] = temp[j];
				}
				previousChoice[i] = choice;
			}
		}
	}
}

void Database::recordSequence()
{
	string SequenceString;
	for (int i = 0; i < 5; i++)
	{
		SequenceString += to_string(previousChoice[i]);
	}
	previousSequence.push_back(SequenceString);
}

string Database::sendSequence()
{
	string SequenceString;
	for (int i = 0; i < 5; i++)
	{
		SequenceString += to_string(previousChoice[i]);
	}
	return SequenceString;
}
