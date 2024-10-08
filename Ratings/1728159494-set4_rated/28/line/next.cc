// AI: Looks good!
#include "line.ih"

string Line::next()
{
    if (d_pos == string::npos)
        return "";

    size_t startPos = d_currentLine.find_first_not_of(" \t", d_pos);
    if (startPos == string::npos)
    {
        d_pos = string::npos;
        return "";
    }

    size_t endPos = d_currentLine.find_first_of(" \t", startPos);
    if (endPos != string::npos)
        d_pos = endPos;
    else
        d_pos = string::npos;

    return d_currentLine.substr(startPos, endPos - startPos);

}