#include "symbol.ih"

Symbol::Symbol(string const &name, double num)
:
    d_name(name),
    d_value(Value(num))
{
    
}
