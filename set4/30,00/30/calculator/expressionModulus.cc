#include "calculator.ih"

bool Calculator::expressionModulus(double num1, bool int1, double num2, 
                                    bool int2, Calculator::Operator operation)
{
    if (operation != Calculator::Operator::MODULUS) //If operator is not modulus then don't check this
        return true;
    if ((num1 >= 0 and int1) and (num2 >= 0 and int2))
        return true;
    cout << "When using modulus, ensure both operands are non-negative "
         << "integrals.\n";
    return false;
}