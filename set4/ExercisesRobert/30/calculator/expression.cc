#include "calculator.ih"

bool Calculator::expression()
{
                        // check if number is provided, while storing in
                        // relevant addresses.
    if (!number(&d_firstNr, &d_firstIsInt))
    {       
        return false;
        usageMsg();
    }

    if (!getOperator())
    {                   // get operator andcheck if valid operator is provided
        return false;
        usageMsg();
    }
                        // check if number is provided, while storing in
                        // relevant addresses.
    if (!number(&d_secondNr, &d_secondIsInt)) 
    {                   
        return false;
        usageMsg();
    }

    if (containsInvalid())
        return false;

}