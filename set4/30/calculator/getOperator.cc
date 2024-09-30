#include "calculator.ih"

bool const Calculator::getOperator()
{
    string sign;
    d_iss >> sign;                  // Extract the operator from d_iss.
    if (sign.length() != 1)
        return false;
    switch (sign.front())
    {
        case ('+'):
            d_op = PLUS;
            return true;
        case ('-'):
            d_op = MINUS;
            return true;
        case ('*'):
            d_op = TIMES;
            return true;
        case ('/'):
            d_op = DIVIDE;
            return true;
        case ('%'):
            d_op = MODULUS;
            return true;
        default:
            return false;
    }
}
