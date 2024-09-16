#include <iostream>
#include <string>
#include <math.h>

using namespace std;

#define BITS (sizeof(long) * 8)

int main(int argc, char *argv[])
{
    char* end;
    long value = strtol(argv[1], &end, 10);

    cout << value << " = ";
    for (
            int i = 1;
            i != BITS;
            i++
    )
    {
        if( (value >> (BITS - i)) & 1 )
            cout << '1';
        else
            cout << '0';
    }

    cout << " = ";

    for(int i = 1; i != BITS; --i)
    {
        if( (value >> (BITS - i)) & 1)
            cout << 
    }

}