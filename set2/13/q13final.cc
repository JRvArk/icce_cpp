#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string value = argv[1];
    while (value.length() > 1)
    {
        size_t sum = 0;
        for (size_t idx = 0; idx < value.length(); ++idx)
                                    // Add only the value of the char to sum.
            sum += value[idx] - '0';
        if (sum == 3 or sum == 6 or sum == 9)
        {
            cout << "divisible by 3\n";
            return 0;
        }
        else
            value = to_string(sum);
    }
    size_t digit = value[0] - '0';
                                    // Also test for edge case that value is 0.
    if(digit % 3 == 0 and digit != 0)
        cout << "divisible by 3\n";
    else
        cout << "not divisible by 3\n";
}