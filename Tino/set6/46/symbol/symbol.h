#ifndef INCLUDED_SYMBOL_
#define INCLUDED_SYMBOL_

#include <string>
#include "../value/value.h"

class Symbol
{
    enum Compare {
        LHS_FIRST, RHS_FIRST, EQUAL
    };
    
    std::string d_name;
    Value d_value;

    public:
        Symbol(std::string const &name, int value);
        Symbol(std::string const &name, double value);

        inline std::string const &identifier() const
        {
            return d_name;
        }
        inline int const intValue() const
        {
            return d_value.intValue();
        }
        inline double const doubleValue() const
        {
            return d_value.doubleValue();
        }
        inline Token const getType() const
        {
            return d_value.token();
        }
        inline Value const &getValue() const
        {
            return d_value;
        }

        Compare compareNames(std::string const &other) const;
        void assign(Value const &value);
};
        
#endif
