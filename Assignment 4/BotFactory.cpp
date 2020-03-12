#include "BotFactory.h"

Bot *BotFactory::pickAlgo(char choice)
{
    switch (choice)
    {
    case 'R':
        return new RandomChoice();
    case 'S':
        return new SmartChoice();
    default:
        return NULL;
    }
}