#include "main.ih"

returnValues combine(int argc, char *argv[])
{
    unsigned long requested = stoul(argv[1]);

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