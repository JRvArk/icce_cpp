#ifndef FIB_H
#define FIB_H

#include <cstddef>

enum
{
    ENDFIB = 90                     // Don't generate Fibonacci beyond ENDFIB.
    // HB: please read the exercise:
    // HB:
    // HB: The array fibval can be defined in (and only directly accessible to fib(size_t)) as
    // HB:
    // HB:  size_t fibval[ENDFIB]
    // HB:
    // HB: where ENDFIB is the value following MAXFIB (see the hints below).
    // HB:
    // HB: and further down:
    // HB:
    // HB: Hints: define an enum value MAXFIB = 90 defining the maximum fibonacci number that can be computed;"
    // HB: 
};

size_t rawfib(size_t value);

size_t fib(size_t value);

double goldenRatio(size_t value);

#endif
