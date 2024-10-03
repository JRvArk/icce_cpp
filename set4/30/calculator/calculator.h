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

    private:
        static bool const number(double *dest, bool *isInt);
        static bool const getOperator();
        static bool const expression();
        static void evaluate();

    public:
        static void run();
};
        
#endif
