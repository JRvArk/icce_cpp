#include "main.ih"

size_t lineCount()
{
    size_t count = 0;
    string inputLine;

    while (getline(cin, inputLine))
        ++count;
    
    return count;
}