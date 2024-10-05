#include "calculator.ih"

void Calculator::run()
{
    while(true)
    {
        cout << "? ";
        if (!d_parser.reset())  // if no new line is filled, break
        {
            usageMsg();
            break;
        }
        evaluate();     
    }
}