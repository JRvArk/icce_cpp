#include "line.ih"

string Line::next()
{
    if (size_t firstWs = d_line.find_first_of(" \t", d_position);
        firstWs != string::npos)
    {
        string subStr = d_line.substr(d_position, d_position - firstWs);
        d_position += firstWs + 1;
        return subStr;
    }
    else
    {
        d_position = string::npos;
        return "";
    }
        
}