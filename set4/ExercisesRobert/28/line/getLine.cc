#include "line.ih"

bool Line::getLine()
{
    if (getline(cin, d_line))
    {
        for (size_t idx = 0; idx != d_line.length(); ++idx)
        {
            if (isspace(d_line[idx]))
                return true;
        }
    }
    return false;
}