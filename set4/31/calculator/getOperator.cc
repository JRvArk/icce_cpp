#include "calculator.ih"

namespace {                         // Check whether given number is an int and
                                    // is non-negative .
    bool checkNumModulus(double num, bool isInt)
    {
        return num >= 0 ? isInt : false;
    }
}

bool const Calculator::getOperator()
{
    string sign;
    s_iss >> sign;                  // Extract the operator from d_iss.
    if (sign.length() != 1)         // Ensure string sign is only 1 char.
        return false;
    switch (sign.front())           // Checking first char == checking sign.
    {
        case ('+'):
            s_op = PLUS;
            return true;
        case ('-'):
            s_op = MINUS;
            return true;
        case ('*'):
            s_op = TIMES;
            return true;
        case ('/'):
            s_op = DIVIDE;
            return true;
        case ('%'):
            s_op = MODULUS;
            return checkNumModulus(s_num1, s_int1);
        default:
            return false;
    }
}
