#include "fib.ih"

size_t fib(size_t value)            // Optimized calculation of Fibonacci.
{                                   // Holds fib(idx) at fibval[idx].
    if (value > ENDFIB) value = ENDFIB;
    static size_t fibval[ENDFIB] = {};
    if (value <= 2) return 1;       // Defined values
    
    if (fibval[value] == 0)         // Calculate Fibonacci number
        fibval[value] = fib(value - 1) + fib(value - 2);
    
    return fibval[value];
}

double goldenRatio(size_t value)    // Calculate the golden ratio using fib.
{
    return (double)fib(value + 1) / (double)fib(value);
}
