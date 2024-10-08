#include "calculator.ih"


// AI: This is an example where you could reuse some functionality
// AI: From the Parser
bool const Calculator::number(double *dest, bool *isInt)
{
    string input;
    cin >> input;
    if (!isValidDouble(input))      // Check if string represents a double.
    {
        return false;
    }                               // If value is too small set it to 0.
    double num = checkDoubleSmall(stod(input));
    *dest = num;
    *isInt = checkInt(num);         // Set isInt depending on num value.
    
    return true;
}
