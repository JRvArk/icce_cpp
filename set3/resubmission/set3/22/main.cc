// HB: rating: 0

#include "main.ih"

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1]); // HB: COCO
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
