#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    for(size_t idx = 1; idx <= 10; idx++)
        cout << idx 
             << " * " 
             << argv[1] 
             << " = " 
             << idx * stoul(argv[1]) 
             << '\n';
}
