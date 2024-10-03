#include "main.ih"

namespace 
{
    char const *usageMsgRSL = R"(
Usage: ./program requested [arguments]

Where:
    - requested: the number of the requested argument. This argument is
                 expected to be given and else the program will be ended with
                 exit status 1. 'Requested' should not exceed the number of
                 arguments given, or the program will end prematurely.

    - [arguments]:  a series of optional arguments, possibly containing the
                    requested argument.
)";
}

void usageMsg()
{
    cout << usageMsgRSL; // newline is unnecessary as it is contained in RSL.
}