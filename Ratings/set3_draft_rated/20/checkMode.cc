#include "main.ih"

// HB: this entire function is SF and makes stuff TC
// HB: just use a switch statement in main

ArgumentStruct checkMode(string arg)
{
    ArgumentStruct argumentStruct; // replace to Enum

    if (arg == "-c")
        argumentStruct.charArg = true;
    else if (arg == "-w")
        argumentStruct.wordArg = true;
    else if (arg == "-l")
        argumentStruct.lineArg = true;

    return argumentStruct;
}
