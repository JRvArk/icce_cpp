#include "fib.ih"

size_t rawfib(size_t value)         // Unoptimized Fibonacci calculation.
{
    if (value > ENDFIB) 
        value = ENDFIB;
    if (value <= 2) 
        return 1;                   // Defined values.
    return rawfib(value - 1) + rawfib(value - 2);
}
