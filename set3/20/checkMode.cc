#include "main.ih"


Mode checkMode(string arg)
{
    if (arg == "-c")
        return Mode::CHARCOUNT;
    else if (arg == "-w")
        return Mode::WORDCOUNT;
    else if (arg == "-l")
        return Mode::LINECOUNT;
    else
        return Mode::NONE;
}