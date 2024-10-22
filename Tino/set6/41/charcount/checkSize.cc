#include "charcount.ih"

void CharCount::checkSize() {
    if (d_charInfo.nCharObj + 1 > d_capacity)
        resize();
}