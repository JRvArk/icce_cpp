#include "calculator.ih"

bool Calculator::number(double *dest, bool *isInt)
{
    if (d_parser.number(dest) == Parser::NUMBER)
    {
        if (d_parser.isIntegral() == true)
            *isInt = true;
        else
            *isInt = false;
        return true;            // read substring is number and checked for int
    }
    else
        return false;           // if next read substring is not a number

}