#include "calculator.ih"

#include <cmath>
#include <regex>

namespace {
    bool isValidDouble(string const &input)
    {                               // Create regex that matches double format.
        std::regex pattern(R"(^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$)");
                                    // Return true if input matches the format.
        return regex_match(input, pattern);
    }

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
    {                               // If op is not NONE then working on num2.
        if (op == MODULUS and ((not isInt or num < 0)))
        {
            cout << "    When using Modulus, both operands have to be non-"
                 << "negative integers.\n";
            return false;
        }
        return true;
    }
}

bool const Calculator::number(double *dest, bool *isInt)
{
    string input;
    s_iss >> input;
    if (!isValidDouble(input))      // Check if string represents a double.
    {
        return false;
    }                               // If value is too small set it to 0.
    double num = checkDoubleSmall(stod(input));
    *dest = num;
    *isInt = checkInt(num);         // Set isInt depending on num value.
                                    // Ensure num2 >= 0 and an int if
                                    // calculating with %.
    return checkModulus(num, s_op, *isInt);
}
