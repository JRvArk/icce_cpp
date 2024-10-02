#include "main.ih"

size_t charCount()
{
    size_t count = 0;
    while (cin.get() != EOF)        // Read characters until EOF is reached.
        ++count;
    return count;                   // Return number of characters.
}
