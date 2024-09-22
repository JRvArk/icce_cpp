#include <iostream>

using namespace std;

struct BitField	                    // Declares a bit-field struct that 
{                                   // adheres to the given constraints.
    size_t bit0:   1;
    size_t field0: 3;
    size_t field1: 4;
    size_t field2: 5;
    size_t field3: 4;
    size_t field4: 4;
    size_t field5: 4;
    size_t field6: 4;
    size_t field7: 4;
    size_t field8: 5;
    size_t field9: 2;
};

union ValueUnion
{
    size_t value;
    BitField bitField;
};

constexpr ValueUnion valueUnion = { // Set the bitField values at compile time.
    .bitField = {0, 7, 15, 10, 6, 7, 15, 15, 7, 0, 3}
};

int main()
{                                   // Display value in hex.
    cout << hex << valueUnion.value << '\n';
}
