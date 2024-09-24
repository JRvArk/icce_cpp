#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;                         // Skip program name in indexing.

                                    // Get the number of combinations using bit
                                    // shifting.
    size_t const totalCombinations = 1 << (argc - 1);
    for (size_t comb = 0; comb < totalCombinations; ++comb)
    {
        cout << comb + 1 << ": ";   // Display the numbered line.

        for (size_t idx = 0; idx != (argc - 1); ++idx)
        {                           // Use bitwise AND to check whether argv at
                                    // idx has to be displayed in the 
                                    // combination.
            if (comb & (1 << idx))
                cout << argv[idx] << " ";
        }

        cout << '\n';
    }
}
