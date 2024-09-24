//JB: ?
#include <iostream>
#include <string>
#include <math.h> //JB: Should not be needed, and replace by cmath.

using namespace std;

int main(int argc, char *argv[])
{
    ++argv; //JB: NSC
                                    // Get the number of combinations using bit
                                    // shifting.
    size_t const totalCombinations = 1 << (argc - 1);
    for (size_t comb = 0; comb < totalCombinations; ++comb)
    {
        cout << comb + 1 << ": ";   // display the numbered line.

            //JB: INDENTATION messed up. Did you use tabs? (Should not.)
            //JB: TYPE, PP
            for (int idx = 0; idx != (argc - 1); idx++)
            {                       // Use bitwise AND to check whether argv at
                                    // idx has to be displayed in the 
                                    // combination.
                if (comb & (1 << idx))
                    cout << argv[idx] << " ";
            }
        cout << '\n';
    }
}
