#include "calculator.ih"

void Calculator::evaluate()
{
    cout << ": ";
    switch (s_op)                   // Make calculations.
    {
        case (PLUS):
            cout << s_num1 + s_num2;
            break;
        case (MINUS):
            cout << s_num1 - s_num2;
            break;
        case (TIMES):
            cout << s_num1 * s_num2;
            break;
        case (DIVIDE):
            cout << s_num1 / s_num2;
            break;
        case (MODULUS):
            cout << static_cast<int>(s_num1) % static_cast<int>(s_num2);
            break;
        default:
            cout << "Error.\n";     // Should not be reached.
    }
    cout << '\n';
}
