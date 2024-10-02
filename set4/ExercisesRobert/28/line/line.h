#ifndef LINE_INCLUDED_
#define LINE_INCLUDED

#include <string>

class Line
{
    size_t d_position;
    std::string d_line;
    size_t d_lineLength;

    public:
        bool getLine();
        std::string next();
};

#endif