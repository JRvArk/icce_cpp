#include <iostream>
#include <string>

using namespace std;

enum {
    MAXLINE = 80,                   // Max line length that is accepted.
                                    // Break lines up after this many chars at
    BREAKLINE = 72                  // prior space or a tab.
};

int main()
{
    string inputText;
    while (getline(cin, inputText))
    {                               // Length is under MAXLINE so display it.
        if (inputText.length() < MAXLINE)
            cout << inputText << '\n';
        else
        {                           // Continue until all of input is processed.
            while (inputText.length() > 0)
            {                       // If-statement for last part of input.
                if (inputText.length() <= BREAKLINE)
                {
                    cout << inputText << '\n';
                    break; 
                }                   // Print to last space-char after BREAKLINE
                for (size_t idx = BREAKLINE; ; ++idx)
                {
                    if (isspace(inputText[idx]))
                    {
                        cout << inputText.substr(0, idx) << '\n';
                                    // Get the idx at which a non-space-char
                                    // starts.
                        while (isspace(inputText[idx]))
                            ++idx;
                                    // Remove idx chars from inputText.
                        inputText = inputText.substr(idx);
                        break;
                    }
                }
            }
        }
    }      
}