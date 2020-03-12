Bot BotFacory::pick(string choice)
{
    switch (choice)
    {
    case R:
        return new RandomChoice();
    case S:
        return new SmartChoice();
    default:
        break;
    }
    return NULL;
}