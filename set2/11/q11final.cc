#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputText;
    while (getline(cin, inputText))
    {
        size_t inputTextLength = inputText.length();
        if (inputTextLength < 80)
            cout << inputText << '\n';
        else if (inputTextLength >= 80)
        {
            
            size_t idx = 0;
            while(idx <= inputTextLength)
            {
                while(!isspace(inputText[idx]) || idx % 72 <= 71)
                {
                    cout << inputText[idx];
                    ++idx;
                }
                cout << '\n';
            }
        }
    }      
}