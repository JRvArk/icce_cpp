#include <iostream>
#include <ostream>
#include <ios>

using namespace std;

int main(int argc, char **argv)
{
    ostream out(cout.rdbuf());

    out.setstate(ios::failbit);

    for (size_t idx = 0; idx != stoull(argv[1]); ++idx)
    {
        if (out.good())
            out << "Nr. of command line arguments: " << argc << '\n';
    }
}