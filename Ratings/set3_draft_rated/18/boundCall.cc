#include "main.ih"

void boundCall(int argc, char *argv[])
{
    auto [ok, nr, value] = combine(argc, argv);

    printCall(ok, nr, value);
}