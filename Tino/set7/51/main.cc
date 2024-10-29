#include "main.ih"

#include "utility/utility.h"

enum
{
    EXPECTED_ARGS = 1               // Num of given arguments expected.
};

int main(int argc, char **argv)
{
    if (argc != EXPECTED_ARGS)
        cout << "Give 1 argument: the name of a student file.\n";

    convert(argv[1]);
}