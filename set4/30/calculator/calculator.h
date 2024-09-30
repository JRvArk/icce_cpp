#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <string>
#include <sstream>

enum Operator
{
    NONE,                           // No operator
    PLUS,                           // +
    MINUS,                          // -
    TIMES,                          // *
    DIVIDE,                         // /
    MODULUS                         // %
};

class Calculator
{
    static std::istringstream d_iss;
    static double d_num1;
    static bool d_int1;
    static enum Operator d_op;
    static double d_num2;
    static bool d_int2;

    public:
        static void run();
    
    private:
        static bool const expression();
        static bool const number(double *dest, bool *isInt);
        static bool const getOperator();
        static void evaluate();
};
        
#endif
