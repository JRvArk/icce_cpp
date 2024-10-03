#include "main.ih"

ReturnValues combine(int argc, char *argv[])
{
    size_t requested = stoul(argv[1]);

    ReturnValues returnValues;
    returnValues.nr = requested;
    if (requested <= argc)
    {
        returnValues.ok = true;
        returnValues.value = argv[requested - 1];
    }
    else
    {
        returnValues.ok = false;
        returnValues.value = "";
    }

    return returnValues;
}