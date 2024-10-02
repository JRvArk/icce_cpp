#include "line.ih"

string Line::next()
{
    if (!(d_position <)= d_lineLength)
    {   
        size_t idx = d_position;
        while (!isspace(d_line[idx]))
        {
            ++idx;
            if (!(idx <= d_lineLength))
                break;
        }
        string subString = d_line.substr(d_position, idx - d_position);
        d_position = ++idx;

        return subString;
    }
    else
        return string::npos;
}