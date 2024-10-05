#include "calculator.ih"

bool Calculator::containsInvalid()
{
    switch(d_operator)
    {
        case DIVISION:
            if (abs(d_secondNr) < d_ZERO_LIMIT)
            {
                cout << "error: division by 0" << '\n';
                return true;
            }
            
        case MODULO:
            if(!d_firstIsInt || !d_secondIsInt)
            {
                cout << "error: modulo with double number" << '\n';
                return true;
            }
            if(d_secondNr == 0)
            {
                cout << "error: modulo 0" << '\n';
                return true;
            }
        
        
        default:
            return false;
    }
}