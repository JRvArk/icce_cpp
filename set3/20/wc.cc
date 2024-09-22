#include "main.ih"

int main(int argc, char *argv[])
{
    string mode = argv[1];
    ArgumentStruct argumentStruct = checkMode(mode);

    if (argumentStruct.charArg)
        cout << charCount() << '\n';
    else if (argumentStruct.wordArg)
        cout << wordCount() << '\n';
    else if (argumentStruct.lineArg)
        cout << lineCount() << '\n';
    
}