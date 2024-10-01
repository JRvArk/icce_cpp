#include "main.ih"

returnValues combine(int argc, char *argv[])
{
    int requested = stoi(argv[1]);

    returnValues ReturnValues;
    ReturnValues.nr = requested;
    if (requested <= argc)
    {
        ReturnValues.ok = true;
        ReturnValues.value = argv[requested - 1];
    }
    else
    {
        ReturnValues.ok = false;
        ReturnValues.value = "";
    }

    return ReturnValues;
}