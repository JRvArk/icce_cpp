#include "line.ih"

bool Line::getLine()
{
    d_position = 0;
    getline(cin, d_line);

    if (d_line.find_first_not_of(" \t"))
        return true;
    else
        return false;

}