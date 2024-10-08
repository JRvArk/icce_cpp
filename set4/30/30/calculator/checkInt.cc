#include "calculator.ih"
#include <cmath>

bool Calculator::checkInt(double num)
{
    if (num == floor(num))
        return true;
    return false;
}