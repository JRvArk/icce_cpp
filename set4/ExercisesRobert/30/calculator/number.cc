#include "calculator.ih"

bool Calculator::number(double *dest, bool *isInt)
{
    if (d_parser.number(dest) == Parser::NUMBER)
        if (d_parser.isIntegral() == true)
            *isInt = true;
        else
            *isInt = false;
    else
    {                              // if substring is no
        usageMsg;
        return false;
    }

}