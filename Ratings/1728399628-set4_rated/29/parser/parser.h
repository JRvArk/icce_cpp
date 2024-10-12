// AI: Looks good now!
// AI: Nice improvement guys!
// AI: 1
#ifndef PARSER_INCLUDED_
#define PARSER_INCLUDED_

// AI: My only comment is about including 'line'
// AI: From the previous exercise instead
#include "../line.h"
#include <string>

class Parser
{
    Line d_line;
    bool d_integral;

    public:                     
        enum Return                 // declared public so it can be used by
        {                           // class calculator
            NO_NUMBER,
            NUMBER,
            EOLN
        };

        bool reset();
        Return number(double *dest);
        bool isIntegral();
        std::string next();

    private:
        Return convert(double *dest, std::string const &str);
        bool pureDouble(double *dest, std::string const &str);

};

#endif