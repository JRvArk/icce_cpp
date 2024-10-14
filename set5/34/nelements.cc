#include "copycat.ih"

size_t const CopyCat::nElements(char const *const *data)
{
    size_t idx = 0;
    while (data[idx] != 0)
        ++idx;

    return idx;
}