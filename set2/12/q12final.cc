#include <iostream>
#include <string>
#include <math.h>

using namespace std;

#define BITS (sizeof(int) * 8)

int main(int argc, char *argv[])
{
    int value = stoi(argv[1]);
    string binary = "";
                                    // Get the binary representation.
    for (size_t idx = 1; idx != BITS; idx++)
    {
        if ((value >> (BITS - idx)) & 1)
            binary.append("1");
        else
            binary.append("0");
    }

    cout << value << " = " << binary << " = ";

    bool firstSetBitHandled = false;
    if (binary[0] == '1')           // Check the leftmost bit for the negative
    {                               // value.
        cout << pow(-2, BITS - 1);
        firstSetBitHandled = true;
    }
    for(size_t idx = 2; idx != BITS; i++)
    {                               // Only check for 1's as these have values.
        if ( (binary[idx - 1] == '1') && firstSetBitHandled)
            cout << " + " << pow(2, BITS - i);
        else
            if (binary[idx - 1] == '1')
            {
                cout << pow(2, BITS - idx);
                firstSetBitHandled = true;
            }
    }
    cout << '\n';
}