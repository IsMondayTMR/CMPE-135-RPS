#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <array>
#include <vector>
using namespace std;

class Database
{
private:
	int previousChoice[5] = { 3, 3, 3, 3, 3 };
	vector<string> previousSequence;
public:
	void recordChoice(int choice);
	void recordSequence();
	string sendSequence();
};

#endif