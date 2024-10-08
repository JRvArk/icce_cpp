#ifndef COPYCAT_INCLUDED_
#define COPYCAT_INCLUDED_

#include <cstddef>

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();
        CopyCat(int argc, char **argv);
        CopyCat(char **data);

    private:
};

#endif