#include "calculator.ih"

void Calculator::evaluate()
{
    if(expression())
    {
        switch(d_operator)
        {
            case Operator::ADDITION:
                cout << d_firstNr + d_secondNr << '\n';
                break;
            case Operator::DIVISION:
                cout << d_firstNr / d_secondNr << '\n';
                break;
            case Operator::MODULO:
                    cout << static_cast<int>(d_firstNr) 
                            % static_cast<int>(d_secondNr) << '\n';
                    break;
            case Operator::MULTIPLICATION:
                cout << d_firstNr * d_secondNr << '\n';
                break;
            case Operator::SUBTRACTION:
                cout << d_firstNr - d_secondNr << '\n';
                break;
            default:
                errorMsg();
        }
    }
    else
        errorMsg();
}