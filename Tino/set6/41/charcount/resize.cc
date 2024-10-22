#include "charcount.ih"

void CharCount::resize() {
    d_capacity *= 2;                // Double capacity.

    Char *tmp = new Char[d_capacity];
                                    // Copy charPtr content to tmp.
    for (size_t idx = 0; idx != d_charInfo.nCharObj; ++idx)
        tmp[idx] = d_charInfo.charPtr[idx];
                                    // Deallocate charPtr.
    delete[] d_charInfo.charPtr;
                                    // Set tmp as new charPtr.
    d_charInfo.charPtr = tmp;
}