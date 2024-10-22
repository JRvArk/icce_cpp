#include "charcount.ih"

void CharCount::checkSize() {
    if (d_charInfo.nCharObj == d_capacity)
        resize();
}