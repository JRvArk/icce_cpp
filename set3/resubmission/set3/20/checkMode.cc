#include "main.ih"

void checkMode(char const mode)
{
    switch (mode)
        {
            case ('c'):
                cout << charCount();
                break;
            case ('w'):
                cout << wordCount();
                break;
            case ('l'):
                cout << lineCount();
                break;
            default:
                cout << "A wrong argument is given.\n";
        }
}