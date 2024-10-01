#include "fib.ih"

size_t rawfib(size_t value)         // Unoptimized Fibonacci calculation.
{
    if (value > ENDFIB) value = ENDFIB; // HB: MS1L
    if (value <= 2) return 1;       // Defined values. // HB: MS1L
    return rawfib(value - 1) + rawfib(value - 2);
}
