#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
    size_t pos = 1;                 // ensure pos is nonzero
    *dest = stod(str, &pos);

    if (pos != str.length())        // no complete conversion
        return false;
    else                            // complete conversion
    {
        d_integral = str.find_first_of(".eE") == string::npos;
        return true;            
    }
}