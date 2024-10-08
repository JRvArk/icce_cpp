#include "calculator.ih"

double Calculator::checkDoubleSmall(double num)
{
    if (abs(num) < 1e-8)
        return 0;
    return num;
}