#ifndef CALCULATOR_INCLUDED_
#define CALCULATOR_INCLUDED_

#include <string>
#include "../../29/parser/parser.h"  // why needed here but not for ex 29??

class Calculator
{
    Parser d_parser; 

    double d_firstNr;
    double d_secondNr;
    bool d_firstIsInt;
    bool d_secondIsInt;
    double d_ZERO_LIMIT;  // initialized to 1e-8 by constructer
                          // changeable with setZeroLimit

    enum Operator
    {
        ADDITION,
        DIVISION,
        MODULO,
        MULTIPLICATION,
        SUBTRACTION
    };
    Operator d_operator;

    public:
        Calculator();
        void run();

    private:
        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();
        void evaluate();
        void usageMsg();
        bool containsInvalid();
        void setZeroLimit(double limit);
};

#endif