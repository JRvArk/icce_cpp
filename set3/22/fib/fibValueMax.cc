#include "fib.ih"

size_t fibValueMax(size_t value)
{
    return value > MAXFIB ? MAXFIB : value;
}