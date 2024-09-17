#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) 
{
    cout << "hello " <<             // display hello 
                                    // if argc is 1 then print world.
            ((argc == 1) ? "world" :
                                    // if argc is 2 then display argv[1].
            ((argc == 2) ? argv[1] : 
                                    // display argv[idx] where idx is the index
                                    // of argv[1]
            argv[stoul(argv[1])])) << '\n';
}