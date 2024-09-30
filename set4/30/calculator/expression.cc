#include "calculator.ih"

bool const Calculator::expression()
{
    bool correct = true;
    if(not number(&d_num1, &d_int1))
    {
        cout << "First parameter has to be a number.\n";
        correct = false;
    }
    if(not getOperator())
    {
        cout << "Second parameter has to be an operator.\n";
        correct = false;
    }
    if(not number(&d_num2, &d_int2))
    {
        cout << "Third parameter has to be a number.\n";
        correct = false;
    }
    return correct;
}
