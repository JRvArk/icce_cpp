#include "charcount.ih"

void CharCount::increment(char ch)
{
    for (size_t idx = 0; idx < d_charInfo.nCharObj; ++idx)
    {                               // found Char to increment 
        if (ch == d_charInfo.charPtr[idx].ch){
            ++d_charInfo.charPtr[idx].count; 
            break;
        }  

    }
}