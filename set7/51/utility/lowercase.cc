#include "utility.h"

#include <cctype>

string lowercase(const string &input) {
    string result = input;
    size_t size = input.size();
    for (size_t idx = 0; idx < size; ++idx)
    {                               // lower every uppercase character in result
        result[idx] = tolower(static_cast<unsigned char>(result[idx]));
    }
    return result;
}