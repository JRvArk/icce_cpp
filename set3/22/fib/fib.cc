#include "fib.ih"

size_t fib(size_t value)            // Optimized calculation of Fibonacci.
{                                   // Holds fib(idx) at fibval[idx].
    if (value > MAXFIB) 
        value = MAXFIB;
    static size_t fibval[ENDFIB] = {};
    if (value <= 2) 
        return 1;                   // Defined values
    
    if (fibval[value] == 0)         // Calculate Fibonacci number
        fibval[value] = fib(value - 1) + fib(value - 2);
    
    return fibval[value];
}
