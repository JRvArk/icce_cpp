#include "calculator.ih"

void Calculator::usageMsg()
{
    cout << 
R"(
Usage: On prompt (? ), provide a number (integral or double), followed by a
whitespace (space or tab) followed by the desired operator followed by yet
another whitespace and then ending with the second integral or double number.
The given input did not follow this usage format.
Provide an empty line to quit the calculator.
)";
}