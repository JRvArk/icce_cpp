#include "charcount.ih"

void CharCount::count(istream &cin)
{
    void (CharCount::*actionFunctionPointers[])(char ch) = 
    {
        &CharCount::append,         // idx 0
        &CharCount::increment,      // idx 1
        &CharCount::insert          // idx 2
    };

    char ch;
    while(cin.get(ch))              // get character from stdin
    {                               // get an action that corresponds to a func
                                    // in the function pointer array
        (this->*actionFunctionPointers[locate(ch)])(ch);
    }
}