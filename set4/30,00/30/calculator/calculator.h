// AI: I recommend considering using the Parser that you created for ex 29
#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <string>
#include <sstream>

class Calculator
{
    std::istringstream d_input_string;
    double d_num1;
    bool d_int1;
    double d_num2;
    bool d_int2;

    public:
        enum Operator
        {
            NONE,                           // No operator
            PLUS,                           // +
            MINUS,                          // -
            TIMES,                          // *
            DIVIDE,                         // /
            MODULUS                         // %
        };
                                // At start, set d_operator to hold no operator.
        enum Operator operation = Operator::NONE;

        void run();

    private:
        
        bool const number(double *dest, bool *isInt);
        bool const getOperator();
        bool const expression();
        void evaluate();
        // test for non-neg ints in mod case.
        bool expressionModulus(double num1, bool int1, double num2, bool int2,
                                Calculator::Operator operation); 
        // Create regex that matches double format.
        bool isValidDouble(std::string const &input);
        double checkDoubleSmall(double num);
        bool checkInt(double num);

};
        
#endif
