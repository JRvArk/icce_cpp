#include "main.ih"

size_t charCount()
{
    size_t count = 0;                       // initialize variables   
    char c;                        // for the while loop

    while (cin.get(c))               // loop over the complete
    {                                       // input to find the number
        if (!isspace(c))            // of non-whitespace chars
            ++count;
    }
    
    return count;
}