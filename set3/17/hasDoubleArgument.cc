#include "main.ih"

                                        // Checks whether the command line
                                        // arguments provided contains a
                                        // double value.
bool hasDoubleArgument(int argc, char **argv)
{
    for (size_t idx = 1; idx != argc; ++idx)
    {
        string numberString = argv[idx];
        if (numberString.find(".") != string::npos)
            return true;
    }
    return false;
}