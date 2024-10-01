#include "fib.ih"

double goldenRatio(size_t value)    // Calculate the golden ratio using fib.
{
    return static_cast<double>(fib(value + 1)) / static_cast<double>(fib(value));
}
