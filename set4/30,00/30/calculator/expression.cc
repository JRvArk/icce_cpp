#include "calculator.ih"
#include <string>

bool const Calculator::expression()
{
    bool correct = true;
    if (not number(&d_num1, &d_int1))
    {
        cout << "First parameter has to be a number.\n";
        correct = false;
    }
    if (not getOperator())
    {
        cout << "Second parameter has to be an operator.\n";
        correct = false;
    }
    if (not number(&d_num2, &d_int2))
    {
        cout << "Third parameter has to be a number.\n";
        correct = false;
    }
    if (!input_string.eof())      // Expression should only have 3 parameters:
    {                               // Number Operator Number.
        cout << "No more than 3 parameters (formatted: num op num) should be "
             << "given.\n";
        return false;               // Immediately return false.
    }
    return Calculator::expressionModulus(num1, int1, num2, int2, 
                                            operation) and correct;
}
