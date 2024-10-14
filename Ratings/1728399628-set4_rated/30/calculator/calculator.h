// AI: Nicely organized!
// AI: 1

#ifndef CALCULATOR_INCLUDED_
#define CALCULATOR_INCLUDED_

#include "../../29/parser/parser.h"  // why needed here but not for ex 29??
#include <string>

class Calculator
{
    Parser d_parser; 

    double d_firstNr = 0;
    double d_secondNr = 0;
    bool d_firstIsInt;
    bool d_secondIsInt;
    double ZERO_LIMIT = 1e-8;

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
        void run();

    private:
        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();
        void evaluate();
        void usageMsg();
        void errorMsg();
        bool containsInvalid();
};

#endif