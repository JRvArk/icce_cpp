#include "main.ih"

#include "utility/utility.h"

enum
{
    EXPECTED_ARGS = 1               // Num of given arguments expected.
};

int main(int argc, char **argv)
{
    if (argc != EXPECTED_ARGS + 1)
    {
        cout << "Usage: ./main <filename>\n";
        return 1;
    }
    
    convert(argv[EXPECTED_ARGS]);
}