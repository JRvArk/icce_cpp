#include "value.ih"

#include <iostream>

void Value::requireSpecial(Token token)
{
    if (token != Token::ERROR || token != Token::IDENT || token != Token::QUIT)
        cerr << "internal error: forcing token " << token <<
                "to value QUIT\n";
    d_token = QUIT;
}