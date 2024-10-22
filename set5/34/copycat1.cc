#include "copycat.ih"

CopyCat::CopyCat(int argc, char **argv)
:
    d_size{ static_cast<size_t>(argc) },
    d_data{ ntbsCopy(argv) }
{}