#include "main.ih"

size_t strcasefind(string const &str,
                   string const &target, size_t offset = 0)
{
    size_t strLength = str.length();
    size_t targetLength = target.length();

    size_t idx = offset;
    string sub;
    const char *targetC = target.c_str();
    while (idx <= strLength - targetLength)
    {
        sub = str.substr(idx, targetLength);
        if (strcasecmp(sub.c_str(), targetC) == 0)
            return idx;
        idx++;
    }
    return string::npos;
}