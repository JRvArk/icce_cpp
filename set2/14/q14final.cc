#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;
    
    size_t totalCombinations = 1 << (argc - 1);
    for (size_t i = 0; i != totalCombinations; i++)
    {
        cout << i + 1 << ": ";
            
            for (int j = 0; j != (argc - 1); j++)
            {
                if (i & (1 << j))
                    cout << argv[j] << " ";
            }
        cout << '\n';
    }
}