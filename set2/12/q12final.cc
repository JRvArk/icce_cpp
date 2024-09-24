#include <iostream>
#include <string>
#include <climits>

using namespace std;

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

        if (value & bitValue)       // Check if bit pos. bitPos of value is 1.
        {
            bits.append("1");

            value -= bitValue;
                                    // Append no "+" if last 1 bit is reached.
            value ? bitValues.append(to_string(bitValue) + " + ") 
                : bitValues.append(to_string(bitValue));
            
        } 
        else 
        {
            bits.append("0");       // Bit position in value is 0.
        }
        bitValue = 0;               // Reset bit value.
    }
    cout << valueCopy << " = " << bits << " = " << bitValues << '\n';
}
