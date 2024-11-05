#include "main.ih"

#include "utility/utility.h" //JB: BH: should go in main.ih

enum
{
    EXPECTED_ARGS = 1               // Num of given arguments expected.
};

int main(int argc, char **argv)
{
    if (argc != EXPECTED_ARGS + 1)
    {
        cout << "Usage: ./main <filename>\n";
        return 1; //JB: :-)
    }

    // JB: If you say here:
    // JB:     filesystem::path const filename(argv[EXPECTED_ARGS]);
    // JB: then we know convert deals with a file name.
    convert(argv[EXPECTED_ARGS]);
}
