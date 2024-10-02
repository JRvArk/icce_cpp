#include "fib.ih"

double goldenRatio(size_t value)    // Calculate the golden ratio using fib.
{                                   // Ensure we don't calculate a fib past 
    value = fibValueMax(value) - 1; // MAXFIB.
    return static_cast<double>(fib(value + 1)) / static_cast<double>(fib(value));
}
