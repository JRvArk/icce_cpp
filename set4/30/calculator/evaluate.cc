#include "calculator.ih"

void Calculator::evaluate()
{
    cout << ": ";
    switch (d_op)
    {
        case (PLUS):
            cout << d_num1 + d_num2;
            break;
        case (MINUS):
            cout << d_num1 - d_num2;
            break;
        case (TIMES):
            cout << d_num1 * d_num2;
            break;
        case (DIVIDE):
            cout << d_num1 / d_num2;
            break;
        case (MODULUS):
            cout << (int)d_num1 % (int)d_num2;
            break;
        default:
            cout << "Error.\n";                  // Should not be reached.
    }
    cout << '\n';
}
