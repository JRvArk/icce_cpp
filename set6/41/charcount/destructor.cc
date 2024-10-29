#include "charcount.ih"

CharCount::~CharCount()
{
    delete[] d_charInfo.charPtr;
}