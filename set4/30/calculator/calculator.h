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
    static std::istringstream s_iss;
    static double s_num1;
    static bool s_int1;
    static enum Operator s_op;
    static double s_num2;
    static bool s_int2;

    public:
        static void run();
    
    private:
        static bool const expression();
        static bool const number(double *dest, bool *isInt);
        static bool const getOperator();
        static void evaluate();
};
        
#endif
