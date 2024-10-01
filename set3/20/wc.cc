#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Usage: provide one argument of the following options:"
             << "[-c|-w|-l]" << '\n';
    }

    string mode = argv[1];
    
    switch(checkMode(argv[1]))
    {
        case Mode::CHARCOUNT:
            cout << charCount() << '\n';
            break;
        case Mode::WORDCOUNT:
            cout << wordCount() << '\n';
            break;
        case Mode::LINECOUNT:
            cout << lineCount() << '\n';
            break;
        case Mode::NONE:
            cout << "Provide a correct option" << '\n';
    }
}