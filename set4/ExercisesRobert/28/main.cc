#include "main.ih"

int main()
{
    Line testObj;

    while(testObj.getLine())
    {
        while(1)
        {
            if(string word = testObj.next(); word.empty() == false)
                cout << word;
            else
                break;
        }
    }
}