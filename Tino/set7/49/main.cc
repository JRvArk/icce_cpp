#include <iostream>
#include <ostream>
#include <ios>

enum {
    EXPECTED_ARGS = 1               // Num of given arguments expected.
};

using namespace std;

int main(size_t argc, char **argv)
{
    if (argc != EXPECTED_ARGS)      // Check argc.
        cout << "Give 1 argument (of type size_t).\n";

    ostream out(cout.rdbuf());      // Create ostream obj using cout's buffer.

    out.setstate(ios::failbit);     // Set out's state to fail state.

    for (size_t idx = 0; idx != stoull(argv[1]); ++idx)
    {
        if (out.good())             // Check if out is ready for IO.
                                    // Since out's in failstate, this remains 0.
            out << "Nr. of command line arguments: " << argc << '\n';
    }
}