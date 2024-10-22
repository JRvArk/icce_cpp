#include "charcount.ih"

void CharCount::insert(char ch)
{
    checkSize();                    // Make sure array is large enough

    size_t idx = d_charInfo.nCharObj - 1;
    while (idx != 0 && ch < d_charInfo.charPtr[idx].ch)
    {
        d_charInfo.charPtr[idx + 1] = d_charInfo.charPtr[idx];
        --idx;
    }                               // Insert ch.
    d_charInfo.charPtr[idx + 1] = Char{ch, 1};
    ++d_charInfo.nCharObj;
}