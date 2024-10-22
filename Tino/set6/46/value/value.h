#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_

#include "../enum/enum.h"

class Value
{
    union {
        int u_int;
        double u_double;
        char u_char;
    };
    Token d_token;
    

    public:
                                    // Define INT type with value of 0.
        Value() : u_int(0), d_token(INT) {}
                                    // Define DOUBLE type with value of value.
        Value(double value) : u_double(value), d_token(DOUBLE) {}
                                    // Define IDENT type where int value holds
                                    // symbol's index in the symbol table.
        Value(int idx) : u_int(idx), d_token(IDENT) {}

        inline int intValue() const
        {
            return u_int;
        }
        void intValue(int value);
        inline double doubleValue() const
        {
            return u_double;
        }
        void doubleValue(double value);
        inline char charValue() const
        {
            return u_char;
        }
        void charValue(char value);
        inline Token token() const
        {
            return d_token;
        }
        void requireSpecial(Token token);
};
        
#endif
