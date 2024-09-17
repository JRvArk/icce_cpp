#include <iostream>

using namespace std;

int main()
{
    size_t value;
    cin >> value;
                                    // value % 2 divides by 2 and returns the
    cout << (value % 2 == 0         // remainder, which is 0 (even) or 1 (odd).
                ? "even" : "odd") << '\n';

                                    // Performs bitwise AND operation between
    cout << (value & 1              // value's least significant bit and 1.
                ? "odd" : "even") << '\n';

                                    // Performs bitwise XOR on value and
                                    // (value + 1), which results in 1 for even.
    cout << (((value + 1) ^ value) == 1 
                ? "even" : "odd") << '\n';

                                    // If even then the statement is true, else
                                    // not because you get (value - 1) == value.
    cout << ((value / 2) * 2 == value 
                ? "even" : "odd") << '\n';

                                    // Bitwise XOR on bitwise NOT 1 and value 
                                    // gives any amount of 1 bits, followed by 
                                    // 0 for even and 1 for odd. Using NOT on
    cout << (~(value | ~1) 	        // that gives 1 (even) or 0 (odd).
                ? "even" : "odd") << '\n';

                                    // This shifts the bits to the right and
                                    // back to the left, essentially making the
                                    // last bit 0.
    cout << ((value >> 1) << 1 != value 
                ? "odd" : "even") << '\n';

} 