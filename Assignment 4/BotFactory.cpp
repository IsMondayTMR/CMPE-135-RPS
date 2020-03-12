#include "BotFactory.h"
#include "RandomChoice.h"
#include "SmartChoice.h"

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