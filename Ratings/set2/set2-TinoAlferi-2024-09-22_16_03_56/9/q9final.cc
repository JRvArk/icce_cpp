// JB: ?
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    //JB: Naming. Why is the loop control variable called 'idx'?
    //JB: That suggests an array into which the index points,
    //JB: but there is no array.
    //JB: Also PP and BAK
    for(size_t idx = 1; idx <= 10; idx++)
        cout << idx 
             << " * " 
             << argv[1] 
             << " = " 
             << idx * stoul(argv[1]) //JB: IRE
             << '\n';
}
