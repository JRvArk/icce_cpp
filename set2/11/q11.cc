#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputText;
    while (getline(cin, inputText));
        size_t inputTextLength = inputText.length();
        if (inputTextLength <= 72)
            cout << inputText << '\n';
        else if (inputTextLength > 72)
        {
            for (size_t i = 0, j = 1; i <= inputTextLength / 72; i++)
            {   
                do
                {
                    cout << inputText[j - 1];
                    j++;
                }
                while (j % 72 && j < inputTextLength);
                cout << '\n';
            }
        }
        
}