#include "calculator.ih"

void Calculator::run()
{
    while(true)
    {
        cout << "? ";
        if (!d_parser.reset())
            break;
        
        evaluate();

    }
}