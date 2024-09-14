#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    for(size_t i = 1; i != 11; i++)
        cout << i 
             << " * " 
             << argv[1] 
             << " = " 
             << i * stoul(argv[1]) 
             << '\n';
}
