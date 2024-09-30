#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string d_line;
    size_t      d_pos;

    public:
        bool const getLine() const;
        std::string const &next() const;
    
    private:
        void setLine(std::string const &line)
        {
            d_line = line;
        }
        void setPos(size_t pos)
        {
            d_pos = pos;
        }
};

#endif
