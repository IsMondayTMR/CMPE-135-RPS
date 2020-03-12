#include <iostream>
#include "Bot.h"
using namespace std;

class BotFacory : public Bot
{
public:
    Bot pick();
};

#endif