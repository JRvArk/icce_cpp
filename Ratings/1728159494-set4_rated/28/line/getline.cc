#include "line.ih"

bool Line::getLine()
{
    d_pos = 0;            // reset position index upon reading a new line
    getline(cin, d_currentLine);

    // AI: Clever!
    return d_currentLine.find_first_of(" \t") != string::npos;

}