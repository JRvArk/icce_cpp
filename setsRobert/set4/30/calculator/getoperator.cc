#include "calculator.ih"

bool Calculator::getOperator()
{
    string operatorStr = d_parser.next();

    if (operatorStr == "+")
    {
        d_operator = Operator::ADDITION;
        return true;
    }
    else if (operatorStr == "/")
    {
        d_operator = Operator::DIVISION;
        return true;
    }
    else if (operatorStr == "%")
    {
        d_operator = Operator::MODULO;
        return true;
    }
    else if (operatorStr == "*")
    {
        d_operator = Operator::MULTIPLICATION;
        return true;
    }
    else if (operatorStr == "-")
    {
        d_operator = Operator::SUBTRACTION;
        return true;
    }
    else
        return false;

}