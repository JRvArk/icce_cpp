#include "charcount.ih"

void CharCount::count(istream &cin)
{
    void (CharCount::*actionFunctionPointers[])(char ch) = 
    {
        &CharCount::append,
        &CharCount::increment,
        &CharCount::insert
    };

    char ch;
    while(cin.get(ch))              // get character from stdin
    {                               // get an action that corresponds to a func
                                    // in the function pointer array
        (this->*actionFunctionPointers[locate(ch)])(ch);
    }
}