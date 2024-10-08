#include "calculator.ih"

namespace {                         // test for non-neg ints in mod case.
    bool expressionModulus(double num1, bool int1, double num2, bool int2,
                           Operator op)
    {
        if (op != MODULUS) // If operator is not modulus then don't check this.
            return true;
        if ((num1 >= 0 and int1) and (num2 >= 0 and int2))
            return true;
        cout << "When using modulus, ensure both operands are non-negative "
             << "integrals.\n";
        return false;
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
    return expressionModulus(s_num1, s_int1, s_num2, s_int2, s_op) and correct;
}
