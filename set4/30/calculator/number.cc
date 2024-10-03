#include "calculator.ih"

#include <cmath>

namespace {
    double checkDoubleSmall(double num)
    {
        if (abs(num) < 1e-8)
            return 0;
        return num;
    }

    bool checkInt(double num)
    {
        if (num == floor(num))
            return true;
        return false;
    }

    bool checkModulus(double num, Operator op, bool isInt)
    {                               // Check whether this is the second number
        if (op == MODULUS)          // and whether the modulus operator is used.
        {
            if (not isInt or num < 0)
            {
                cout << "Only non-negative ints: ";
                return false;
            }
        }
        return true;
    }
}

bool const Calculator::number(double *dest, bool *isInt)
{
    string input;
    s_iss >> input;
                                    // Check if string represents a double.
    if (input.find_first_not_of("0123456789.") != string::npos)
        return false;
    double num = checkDoubleSmall(stod(input));
    *isInt = checkInt(num);
    return checkModulus(num, s_op, isInt);
}
