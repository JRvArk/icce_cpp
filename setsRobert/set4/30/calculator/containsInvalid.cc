#include "calculator.ih"

namespace
{

    // Checks for division error, for case that secondNr is int
    bool divisionError(int secondNr, double ZERO_LIMIT)
    {
        if (abs(secondNr) < ZERO_LIMIT)
            {
                cout << "error: division by 0" << '\n';
                return true;
            }
        else
            return false;
    }

    // Overloaded function for the case that secondNr is double
    bool divisionError(double secondNr, double ZERO_LIMIT)
    {
        if (abs(secondNr) < ZERO_LIMIT)
            {
                cout << "error: division by 0" << '\n';
                return true;
            }
        else
            return false;
    }

    bool moduloError(int fir)

};

bool const Calculator::containsInvalid()
{
    switch(d_operator)
    {
        case DIVISION:
            return divisionError(d_secondNr, d_ZERO_LIMIT);
            
        case MODULO:
            if (!d_firstIsInt || !d_secondIsInt)
            {
                cout << "error: modulo with non integer number" << '\n';
                return true;
            }
            if (d_secondNr == 0)
            {
                cout << "error: modulo 0" << '\n';
                return true;
            }
            if (d_firstNr < 0 || d_secondNr < 0)
            {
                cout << "error: modulo with negative value"
            }
        
        default:
            return false;
    }
}