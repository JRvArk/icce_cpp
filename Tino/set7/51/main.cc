#include "main.ih"

#include "utility/utility.h"

enum
{
    EXPECTED_ARGS = 1               // Num of given arguments expected.
};

int main(int argc, char **argv)
{
    if (argc != EXPECTED_ARGS)
        cout << "Usage: ./main <filename>\n";
        return 1;

    string name = argv[1];
    convert(name);
}