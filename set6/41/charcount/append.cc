#include "charcount.ih"

void CharCount::append(char ch)
{
    checkSize();                       // Check if resizing is needed
                                    // Append ch
    d_charInfo.charPtr[d_charInfo.nCharObj] = Char{ch, 1};
    ++d_charInfo.nCharObj;          // Increment char count
}