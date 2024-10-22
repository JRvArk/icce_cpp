#include "charcount.ih"

void CharCount::resize() {
    d_capacity *= 2;
    Char *tmp = new Char[d_capacity];
    for (size_t idx = 0; idx != d_charInfo.nCharObj; ++idx)
        tmp[idx] = d_charInfo.charPtr[idx];
    delete[] d_charInfo.charPtr;
    d_charInfo.charPtr = tmp;
}