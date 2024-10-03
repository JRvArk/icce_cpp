#include "calculator.ih"

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
            return true;
        default:
            return false;
    }
}
