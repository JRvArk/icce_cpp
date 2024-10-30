#include <iostream>
#include <ostream>
#include <ios>

enum
{
    EXPECTED_ARGS = 1               // Num of given arguments expected.
};

using namespace std;

int main(int argc, char **argv)
{
    if (argc != EXPECTED_ARGS + 1)      // Check argc.
        cout << "Give 1 argument (of type size_t).\n";

    ostream out(cout.rdbuf());      // Create ostream obj using cout's buffer.

    out.setstate(ios::failbit);     // Set out's state to fail state.

    size_t amt = stoull(argv[EXPECTED_ARGS]);
    for (size_t idx = 0; idx != amt; ++idx)
    {
        if (out.good())             // Check if out is ready for IO.
                                    // Since out's in failstate, this remains 0.
            out << "Nr. of command line arguments: " << argc << '\n';
    }
}