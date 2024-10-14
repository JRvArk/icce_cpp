#include "copycat.ih"

char **CopyCat::ntbsCopy(char const *const *input)
{
    size_t inputSize = nElements(input);
    char **output = new char *[inputSize];

    for (size_t idx = 0; idx != inputSize; ++idx)
    {
        output[idx] = duplicate(input[idx]);
    }
}
