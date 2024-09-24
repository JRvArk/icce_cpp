#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Please provide 1 positive integral argument" << '\n';
        return 1;
    }

    size_t const value = stoul(argv[1]);
    for (size_t multiplier = 1; multiplier <= 10; ++multiplier)
        cout << multiplier
             << " * " 
             << value
             << " = " 
             << multiplier * value
             << '\n';
}
