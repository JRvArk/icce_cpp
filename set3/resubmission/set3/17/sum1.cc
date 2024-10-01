#include "main.ih"

                                    // Takes the command line arguments
                                    // and returns the sum. Assuming valid
                                    // (here, integer)
                                    // arguments have been passed.
                                    // specify any int value as third
                                    // argument to use this overloaded function
int sum(int argc, char **argv, int anyIntegerValue) // HB: unused parameter; hint: Google how to fix this (or ask me if you can't figure it out)
{
    long sum = 0; // HB: TYPE
    for (int idx = 1; idx < argc; ++idx) // HB: TYPE, CANON
        sum += stol(argv[idx]);
    return sum;
}
