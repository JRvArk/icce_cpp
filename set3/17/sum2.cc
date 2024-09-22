#include "main.ih"

                            // Takes the command line arguments
                            // and returns the sum. Assuming valid
                            // (here, at least one double)
                            // arguments have been passed.
                            // specify any double value as third
                            // argument to use this overloaded function
double sum(int argc, char **argv, double anyDoubleValue)
{
    double sum = 0;
    for (size_t idx = 1; idx <= argc - 1; ++idx)
        sum += stod(argv[idx]);

    return sum;
}