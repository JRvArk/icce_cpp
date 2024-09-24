#include "main.ih"

                                    // Takes the command line arguments
                                    // and returns the sum. Assuming valid
                                    // (here, integer)
                                    // arguments have been passed.
                                    // specify any int value as third
                                    // argument to use this overloaded function
int sum(int argc, char **argv, int anyIntegerValue)
{
    long sum = 0;
    for (size_t idx = 1; idx < argc; ++idx)
        sum += stol(argv[idx]);
    return sum;
}