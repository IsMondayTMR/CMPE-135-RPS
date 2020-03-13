#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <array>
using namespace std;

class Database
{
private:
	int previousChoice[5] = { 3, 3, 3, 3, 3 };
public:
	void recordChoice(int choice);
	string sendSequence();
};

#endif