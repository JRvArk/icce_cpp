#include "calculator.ih"

bool const Calculator::getOperator()
{
    string sign;
    d_input_string >> sign;                  // Extract the operator from d_iss.
    if (sign.length() != 1)         // Ensure string sign is only 1 char.
        return false;
    switch (sign.front())           // Checking first char == checking sign.
    {
        case ('+'):
            operation = PLUS;
            return true;
        case ('-'):
            operation = MINUS;
            return true;
        case ('*'):
            operation = TIMES;
            return true;
        case ('/'):
            operation = DIVIDE;
            return true;
        case ('%'):
            operation = MODULUS;
            return true;
        default:
            return false;
    }
}
