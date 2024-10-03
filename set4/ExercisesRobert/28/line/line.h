#ifndef LINE_INCLUDED_
#define LINE_INCLUDED

#include <string>

class Line
{
    size_t d_pos;
    std::string d_currentLine;

    public:
        bool getLine();
        std::string next();
};

#endif