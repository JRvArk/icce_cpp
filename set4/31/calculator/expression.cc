#include "calculator.ih"

bool const Calculator::expression()
{
    bool correct = true;
    if(not number(&s_num1, &s_int1))
    {
        cout << "First parameter has to be a number.\n";
        correct = false;
    }
    if(not getOperator())
    {
        cout << "Second parameter has to be an operator.\n";
        if (s_op == MODULUS)        // Display error message for mod case.
            cout << "    When using Modulus, both operands have to be non-"
                 << "negative integers.\n";
        correct = false;
    }
    if(not number(&s_num2, &s_int2))
    {
        cout << "Third parameter has to be a number.\n";
        correct = false;
    }
    if (!s_iss.eof())               // Expression should only have 3 parameters:
    {                               // Number Operator Number.
        cout << "No more than 3 parameters (formatted: num op num) should be "
             << "given.\n";
        correct = false;
    }
    return correct;
}
