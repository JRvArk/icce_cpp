#include "calculator.ih"

namespace {                         // test for non-neg ints in mod case.
    bool expressionModulus(double num1, bool int1, double num2, bool int2)
    {
        if ((num1 >= 0 and int1) or (num2 >= 0 and int2))
        {
            cout << "When using modulus, ensure both operands are non-negative"
                 << "integrals.\n";
            return false;
        }
        return true;
    }
}

bool const Calculator::expression()
{
    bool correct = true;
    if (not number(&s_num1, &s_int1))
    {
        cout << "First parameter has to be a number.\n";
        correct = false;
    }
    if (not getOperator())
    {
        cout << "Second parameter has to be an operator.\n";
        correct = false;
    }
    if (not number(&s_num2, &s_int2))
    {
        cout << "Third parameter has to be a number.\n";
        correct = false;
    }
    if (!s_iss.eof())               // Expression should only have 3 parameters:
    {                               // Number Operator Number.
        cout << "No more than 3 parameters (formatted: num op num) should be "
             << "given.\n";
        return false;               // Immediately return false.
    }
    if (s_op == MODULUS)
        correct = expressionModulus(s_num1, s_int1, s_num2, s_int2);
    return correct;
}
