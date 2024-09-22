#include "main.ih"


ArgumentStruct checkMode(string arg)
{
    ArgumentStruct argumentStruct;

    if (arg == "-c")
        argumentStruct.charArg = true;
    else if (arg == "-w")
        argumentStruct.wordArg = true;
    else if (arg == "-l")
        argumentStruct.lineArg = true;

    return argumentStruct;
}