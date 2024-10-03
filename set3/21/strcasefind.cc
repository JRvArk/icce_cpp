#include "main.ih"

size_t strcasefind(string const &str,
                   string const &target, size_t offset = 0)
{
    size_t const strLength = str.length();
    size_t const targetLength = target.length();

    char const *cTarget = target.c_str();
    for(size_t const lengthDiff = strLength - targetLength;
            offset <= lengthDiff;
             ++offset)
    {
        if (strcasecmp(str.substr(offset, targetLength).c_str(), cTarget) == 0)
            return offset;
    }
    return string::npos;
}
