#include <iostream>
#include <string>

using namespace std;

enum Length 
{
    directPrint = 79, // lines *shorter than* 80 will be printed directly
    brokenLine = 72,  // lines longer than 79 will be broken at first
                      // space/tab char after 72
};

int main()
{
    string line;
    while (getline(cin, line))
    {
       size_t const lineLength = line.length();
       size_t idx = 0;
       while (idx < lineLength) 
       {
            if (lineLength - idx <= Length::directPrint)
            {                                             // If shorter than
                cout << line.substr(idx) << '\n';         // 80 print directly
                break;                                    // and break to get 
            }                                             // next link
            else
            {   
                size_t startPos = idx;          // select start position       
                idx += 72;                      // of to be broken string
                                                // and add 72 to idx to start
                                                // searching for space there
                while(!isspace(line[idx]))
                    ++idx;
                                                // idx - startPos denotes
                                                // end position of broken
                                                // line.
                cout << line.substr(startPos, idx - startPos)
                     << '\n';
                ++idx;                          // skip printing of space
                                                // beyond 72th char.                                     
            }
       }
    }
}

