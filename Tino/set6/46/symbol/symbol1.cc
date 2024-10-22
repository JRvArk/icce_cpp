#include "symbol.ih"

Symbol::Symbol(string const &name, int num)
:
    d_name(name)
{
    d_value = Value();
    d_value.intValue(num);
}
