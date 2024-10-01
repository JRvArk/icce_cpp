#include "main.ih"

bool structCall(int argc, char *argv[])
{
    returnValues ReturnValues = combine(argc, argv);
    return printCall(ReturnValues.ok, 
                    ReturnValues.nr, 
                    ReturnValues.value);
}