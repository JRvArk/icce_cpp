#include "main.ih"

size_t wordCount()
{
    size_t count = 0;
    string inputWord;

    while(cin >> inputWord)
        ++count;

    return count;
}