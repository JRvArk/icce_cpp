#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string subString = d_line.next();
    if (subString.empty() == true) 
        return Parser::EOLN;

    return convert(dest, subString);// Return (NO_)NUMBER based on successful
                                    // or failing conversion.
}