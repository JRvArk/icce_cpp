#include <iostream>

char const RSL[] =                  // define the RSL identical to the output
R"RSL(
^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)RSL";

int main()
{
    std::cout << RSL << '\n';        // display output to the stream
}