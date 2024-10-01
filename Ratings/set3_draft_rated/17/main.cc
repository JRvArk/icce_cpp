// HB: rating: ?

#include "main.ih"

int main(int argc, char *argv[])
{
   cout << (hasDoubleArgument(argc, argv) ? sum(argc, argv, 1.0) :
            sum(argc, argv, 1)) << '\n';
}
