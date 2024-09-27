#include fib.ih

double goldenRatio(size_t value)    // Calculate the golden ratio using fib.
{
    return (double)fib(value + 1) / (double)fib(value);
}
