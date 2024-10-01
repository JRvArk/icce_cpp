#ifndef FIB_H
#define FIB_H

#include <cstddef>

enum
{
    MAXFIB = 90,                    // Don't generate Fibonacci beyond MAXFIB.
    ENDFIB = MAXFIB + 1             // Array size according to MAXFIB.
};

size_t rawfib(size_t value);

size_t fib(size_t value);

double goldenRatio(size_t value);

#endif