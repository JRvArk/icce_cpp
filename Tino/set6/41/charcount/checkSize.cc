#include "charcount.ih"

void CharCount::checkSize() {       // Check if more chars needs resizing.
    if (d_charInfo.nCharObj + 1 > d_capacity)
        resize();
}