#include <iostream>

using namespace std;

struct BitField	                    // Declares a bit-field struct that 
{                                   // adheres to the given constraints.
    uint32_t bit0:   1;
    uint32_t field0: 3;
    uint32_t field1: 4;
    uint32_t field2: 5;
    uint32_t field3: 4;
    uint32_t field4: 4;
    uint32_t field5: 4;
    uint32_t field6: 4;
    uint32_t field7: 4;
    uint32_t field8: 5;
    uint32_t field9: 2;
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
