#include "main.ih"

int main(int argc, char *argv[])
{                                   // Get value from argv and ensure it doesn't
                                    // exceed MAXFIB.
    size_t const value = fibValueMax(stoul(argv[1]));
    if (stoul(argv[1]) != value)    // Inform user of calculating > MAXFIB.
        cout << "Calculations of Fibonacci do not pass " << MAXFIB << ".\n";
    if (argc != 2)
        cout << "Unoptimized Fibonacci " << value  
             << ": " << rawfib(value) << '\n';
    else
    {
        
        cout << "Optimized Fibonacci " << value
             << ": " << fib(value) << '\n';
        cout << "Golden ratio: " << goldenRatio(value) << '\n';
    }
}