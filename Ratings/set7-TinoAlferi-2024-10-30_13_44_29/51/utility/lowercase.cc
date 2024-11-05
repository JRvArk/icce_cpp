#include "utility.h"

#include <cctype> //JB: BH, use an ih.

//JB: COAT, L
string lowercase(const string &input) {
    string result = input;
    //JB: COCO
    size_t size = input.size();
    for (size_t idx = 0; idx < size; ++idx) //JB: TC/RBF
    { //JB: SF{}                    // lower every uppercase character in result
        //JB: WHEEL
        result[idx] = tolower(static_cast<unsigned char>(result[idx]));
    }
    return result;
}
