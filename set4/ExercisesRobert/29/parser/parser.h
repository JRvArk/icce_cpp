#ifndef PARSER_INCLUDED_
#define PARSER_INCLUDED_

#include <string>

class Parser
{
    Line d_line;
    
    enum Return
    {
        NO_NUMBER,
        NUMBER,
        EOLN
    };

    public:
        bool reset();
        Return number(double *dest);
        bool isIntegral();
        std::string next();

    private:
        Return convert(double *dest, std::string const &str);
        bool pureDouble(double *dest, std:string const &str);

}