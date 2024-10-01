#include "fib.ih"

size_t fib(size_t value)            // Optimized calculation of Fibonacci.
{                                   // Holds fib(idx) at fibval[idx].
    if (value > ENDFIB) value = ENDFIB; // HB: MS1L


    static size_t fibval[ENDFIB] = {}; // HB: SF initialiser
    // HB: regarding my earlier comment about the hints we gave:
    // HB: We now have a situation in which fibval[ENDFIB] exceeds array bounds,
    // HB: even though it seems like you prevented against that, 
    // HB: which is probably worse than if you hadn't checked it at all.
    // HB: We consider memory bugs like this very eggregious and usually rate an exercise containing one as 0.

    if (value <= 2) return 1;       // Defined values // HB: MS1L
    
    if (fibval[value] == 0)         // Calculate Fibonacci number
        fibval[value] = fib(value - 1) + fib(value - 2);
    
    return fibval[value];
}
