#include "calculator.ih"

void Calculator::run()
{
    usageMsg();
    
    while(true)
    {
        cout << "? ";
        if (!d_parser.reset())      // if no new line is filled, break
        {
            break;
        }
        evaluate();     
    }
}