#include "calculator.ih"

#include <string>

void Calculator::run()
{
    cout << "? ";
    string input;
    while (getline(cin, input))
    {
        if (input.empty())          // If no input, end calculations.
            break;
        s_op = NONE;                // At start, set d_op to hold no operator.
        s_iss.clear();
        s_iss.str(input);
        if (expression())           // Evaluate whether input is correct.
            evaluate();             // Calculate and display the expression.
        cout << "? ";
    }
}
