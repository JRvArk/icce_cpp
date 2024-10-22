#include "charcount.ih"

void CharCount::count(istream &cin)
{
    char ch;    // ES: ABC
    while(cin.get(ch))              // get character from stdin
    {
        switch (locate(ch))         // choose Action according to locate
        {
        case APPEND:
            append(ch);
            break;
        case INSERT:
            insert(ch);
            break;
        case INC:
            increment(ch);
            break;
        default:
            break;
        }
    }
}