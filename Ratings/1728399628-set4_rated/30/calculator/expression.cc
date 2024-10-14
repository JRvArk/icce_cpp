#include "calculator.ih"

bool Calculator::expression()
{
                        // check if number is provided, while storing in
                        // relevant addresses.
    if (!number(&d_firstNr, &d_firstIsInt))    
        return false;

    if (!getOperator()) // get operator andcheck if valid operator is provided
        return false;
                        // check if number is provided, while storing in
                        // relevant addresses.
    if (!number(&d_secondNr, &d_secondIsInt)) 
        return false;

    if (containsInvalid())
        return false;

    return true;

}