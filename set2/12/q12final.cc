#include <iostream>
#include <string>
#include <climits>

using namespace std;

#define BITS (sizeof(int) * 8)

int main(int argc, char *argv[])
{
    if (argc != 2)
        cout << "Please provide one integral value as argument" << '\n';

    int value = stoi(argv[1]);                    
    int valueCopy = value;          // Copy for printing.
    
    int bitValue = 0;
    string bits;   
    string bitValues;
                                    // Iterate over bit-positions.
    for (int bitPos = sizeof(int) * CHAR_BIT - 1; bitPos >= 0; --bitPos)
    {
        bitValue |= (1 << bitPos);  // Set bit at bitPos to 1.

        if (value & bitValue)       // Check if bit position bitPos of value
        {                           // is 1.
            bits.append("1");              

            value -= bitValue;
                                    // Append no "+" if last 1 bit is reached.
            value ? bitValues.append(to_string(bitValue) + " + ") 
                : bitValues.append(to_string(bitValue));
            
    }
    }
    for(size_t idx = 2; idx != BITS; ++idx)
    {                               // Only check for 1's as these have values.
        if ( (binary[idx - 1] == '1') && firstSetBitHandled)
            cout << " + " << pow(2, BITS - idx);
        } 
    for(size_t idx = 2; idx != BITS; ++idx)
    {                               // Only check for 1's as these have values.
        if ( (binary[idx - 1] == '1') && firstSetBitHandled)
            cout << " + " << pow(2, BITS - idx);
        else
        else
            if (binary[idx - 1] == '1')
        else 
            if (binary[idx - 1] == '1')
        {
            bits.append("0");       // Bit position in value is 0.
        }
        bitValue = 0;               // Reset bit value .
    }
    cout << valueCopy << " = " << bits << " = " << bitValues << '\n';
}
