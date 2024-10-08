#include "calculator.ih"
#include <string>

void Calculator::run()
{
    string input;
    while (true)
    {
        cout << "? ";
        cin.clear();
        getline(cin, input);
        if (input.empty())          // If no input, end calculations.
            break;
        d_input_string.clear();
        d_input_string.str(input);
        if (expression())           // Evaluate whether input is correct.
            evaluate();             // Calculate and display the expression.
        cout << "? ";
    }
}
