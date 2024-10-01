#include "main.ih"

size_t strcasefind(string const &str,
                   string const &target, size_t offset = 0)
{
    size_t strLength = str.length(); // HB: COCO
    size_t targetLength = target.length(); // HB: COCO

    size_t idx = offset; // HB: SF

    string sub; // HB: SF
    // HB: also, it is just a bad idea since this might double memory consumed by such a function.
    // HB: then on top of that, you are already calling c_str() on this object anyway, showing that you don't really need it

    const char *targetC = target.c_str(); // HB: COAT
    while (idx <= strLength - targetLength) // HB: IRE, why not use a for loop?
    {
        sub = str.substr(idx, targetLength); // HB: reassigning a string in a loop is too expensive for what we need to do.
        if (strcasecmp(sub.c_str(), targetC) == 0)
            return idx;
        idx++; // HB: PP
    }
    return string::npos;
    // HB: many errors in very few lines of code
}
