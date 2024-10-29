#include "charcount.ih"

CharCount::CharCount()
:
    d_capacity(INIT_CAP)            // Set inital capacity
{                                   // Allocate for Char array.
    d_charInfo.charPtr = new Char[d_capacity];
}