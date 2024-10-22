#include "copycat.ih"

char *CopyCat::duplicate(char const *const src)
{
    size_t srcLength = strlen(src);
    char *dest = new char[srcLength];
    strcpy(dest, src);
    return dest;
}