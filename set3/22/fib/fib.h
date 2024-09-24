#ifndef FIB_H
#def FIB_H

enum
{
    ENDFIB = 90                     // Don't generate Fibonacci beyond ENDFIB.
};

size_t rawfib(size_t value);

size_t fib(size_t value);

double goldenRatio(size_t value);

#endif