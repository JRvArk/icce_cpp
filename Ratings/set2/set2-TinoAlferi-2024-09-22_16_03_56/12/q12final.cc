// JB: 0
// JB: NAE: wrong (imprecise) output when used with e.g. -12 as argument.
#include <iostream>
#include <string>
#include <math.h> //JB: Should not be needed. And use cmath, not math.h.

using namespace std;

// JB: This is soo C. Use an enum!
#define BITS (sizeof(int) * 8)
// JB: NMN. Use the existing CHAR_BIT.

int main(int argc, char *argv[])
{
    //JB: BS: argv used without checking argc. (*1)
    int value = stoi(argv[1]);
    string binary = ""; //JB: SF initialization with an emtpy NTSB.
                                    // Get the binary representation.
    for (size_t idx = 1; idx != BITS; idx++) //JB: PP
    {
        if ((value >> (BITS - idx)) & 1)
            binary.append("1");
        //JB: FLOW: only argument differs between true and false branch.
        else
            binary.append("0");
    }

    cout << value << " = " << binary << " = ";

    bool firstSetBitHandled = false;
    if (binary[0] == '1')           // Check the leftmost bit for the negative
    {                               // value.
        cout << pow(-2, BITS - 1); //JB: Using pow is way TC for this.
        firstSetBitHandled = true;
    }
    for(size_t idx = 2; idx != BITS; ++idx) //JB: BAK
    {                               // Only check for 1's as these have values.
        if ( (binary[idx - 1] == '1') && firstSetBitHandled)
            cout << " + " << pow(2, BITS - idx);
        else
            if (binary[idx - 1] == '1') //JB: FLOW: condition repeated.
            {
                cout << pow(2, BITS - idx);
                firstSetBitHandled = true;
            }
    }
    cout << '\n';
}
/* JB:
   *1): Even though you may assume correct input for the C++ course (as
        otherwise you'd spend too much time checking input), make it a habit
        to check argc before using argv. If you don't, your programs will at
        some point segfault when used without arguments, which will cause you
        to fetch the source and rebuild and perhaps even break out the
        debugger before your realize the simple cause.
 */
