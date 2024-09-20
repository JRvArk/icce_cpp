#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputText;
    while (getline(cin, inputText))
    {
        size_t inputTextLength = inputText.length();
        if (inputTextLength < 80)   // Lines below 80 chars in length are fine.
            cout << inputText << '\n';
        else
        {
            size_t idx = 0;
            while(idx <= inputTextLength)
                                    // Test for spaces or tabs at idx after 72
            {                       // characters at each iteration.
                while(!isspace(inputText[idx]) || idx % 72 <= 71)
                    cout << inputText[idx++];
                cout << '\n';
            }
        }
    }      
}