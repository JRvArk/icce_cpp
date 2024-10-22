#include "charcount.ih"

CharCount::CharCount()
:
    d_capacity(INIT_CAP)
{
    d_charInfo.charPtr = new Char[d_capacity];
}