#include <iostream>
#include <string>
#include <math.h>

using namespace std;

#define BITS (sizeof(int) * 8)

int main(int argc, char *argv[])
{
    int value = stoi(argv[1]);
    string binary = "";

    for (
            size_t i = 1;
            i != BITS;
            i++
    )
    {
        if( (value >> (BITS - i)) & 1 )
            binary.append("1");
        else
            binary.append("0");
    }

    cout << value << " = ";
    cout << binary << " = ";

    bool firstSetBitHandled = false;
    if (binary[0] == '1')
    {
        cout << pow(-2, BITS - 1);
        firstSetBitHandled = true;
    }
    for(size_t i = 2; i != BITS; i++)
    {
    
        if ( (binary[i - 1] == '1') && firstSetBitHandled)
            cout << " + " << pow(2, BITS - i);
        else
            if (binary[i - 1] == '1')
            {
                cout << pow(2, BITS - i);
                firstSetBitHandled = true;
            }
    }
    cout << '\n';
}