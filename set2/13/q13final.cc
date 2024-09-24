#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)                  // Check arguments.
    {
        cout << "Please provide one positive integral number as arg" << '\n';
        return 1;
    }

    string value = argv[1];
    size_t valueSum = 0;            // Initialize the sum of value's digits 
                                    // to 0 as a start.

    for (char digit : value)        // Find the first sum of value's digits and
        valueSum += digit - '0';    

    while (valueSum > 9)            // The sum of second and further iterations
    {                               // is computed while the sum has 2+ digits.
        size_t tempSum = 0;
        while (valueSum > 0)
        {
            tempSum += valueSum % 10;
            valueSum /= 10;
        }
        valueSum = tempSum;
    }

    cout << (valueSum % 3 == 0 ? "divisible by 3" : 
            "not divisble by 3") << '\n';
}
