#include <iostream>

using namespace std;

enum
{
    ENDFIB = 90                     // Don't generate Fibonacci beyond ENDFIB.
};

size_t rawfib(size_t value)         // Unoptimized Fibonacci calculation.
{
    if(value <= 2) return 1;        // Defined values.
    return rawfib(value - 1) + rawfib(value - 2);
}

size_t fib(size_t value)            // Optimized calculation of Fibonacci.
{                                   // Holds fib(idx) at fibval[idx].
    static size_t fibval[ENDFIB] = {};
    if(value <= 2) return 1;        // Defined values
    
    if(fibval[value] == 0)          // Calculate Fibonacci number
        fibval[value] = fib(value - 1) + fib(value - 2);
    
    return fibval[value];
}

double goldenRatio(size_t value)    // Calculate the golden ratio using fib.
{
    return (double)fib(value + 1) / (double)fib(value);
}

int main(int argc, char *argv[])
{
    if(argc != 2)
        cout << "Unoptimized Fibonacci " << argv[1] 
             << ": " << rawfib(stoul(argv[1])) << '\n';
    else
    {
        size_t value = stoul(argv[1]);
        cout << "Optimized Fibonacci " << argv[1]
             << ": " << fib(value) << '\n';
        cout << "Golden ratio: " << goldenRatio(value) << '\n';
    }
}