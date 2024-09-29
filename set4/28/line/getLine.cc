#include "line.ih"

#include <cctype>

bool const Line::getLine() const
{
    string line;
    getline(cin, line);
    for (char const c : line)       // Check every character in line.
        if(isspace(c))              
            return false;
    return true;
}
