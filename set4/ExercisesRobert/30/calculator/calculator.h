#ifndef CALCULATOR_INCLUDED_
#define CALCULATOR_INCLUDED_

#include <string>

class Calculator
{
    public:
        void run();

    private:
        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();
        void evaluate();
}