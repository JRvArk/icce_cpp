#include "calculator.ih"

bool Calculator::containsInvalid()
{
    switch(d_operator)
    {
        case DIVISION:
            if (d_secondNr < d_ZERO_LIMIT)
            {
                cout << "error: division by 0" << '\n';
                return true;
            }
            else
                return false;           
        case MODULO:
            if (!d_firstIsInt || !d_secondIsInt)
            {
                cout << "error: modulo with non integer number" << '\n';
                return true;
            }
            else if (d_secondNr == 0)
            {
                cout << "error: modulo 0" << '\n';
                return true;
            }
            else
                return false;
        
        default:
            return false;
    }
}