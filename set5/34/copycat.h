#ifndef COPYCAT_INCLUDED_
#define COPYCAT_INCLUDED_

#include <cstddef>

extern char **environ;

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();                          //inline ; copies environ
        CopyCat(int argc, char **argv);     // 1
        CopyCat(char **data);               // 2 ; copies environ-like variable

    private:
        static size_t const nElements(char const *const *data);
        static char **ntbsCopy(char const *const *data);
        static char *duplicate(char const *const src);
};

inline CopyCat::CopyCat()
:
    CopyCat(environ)
{}

#endif