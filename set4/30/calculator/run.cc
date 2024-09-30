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
        d_op = NONE;                // At start, set d_op to hold no operator.
        d_iss.clear();
        d_iss.str(input);
        if (expression())           // Evaluate whether input is correct.
            evaluate();
        cout << "? ";
    }
}
