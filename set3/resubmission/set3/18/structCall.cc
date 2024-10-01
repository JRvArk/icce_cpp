#include "main.ih"

bool structCall(int argc, char *argv[])
{
    ReturnValues returnValues = combine(argc, argv);
    
    if (returnValues.ok == false)
    {
        usageMsg();
        return false;
    }
    else 
    {
        printCall(returnValues.nr, returnValues.value);
        return true;
    }
}