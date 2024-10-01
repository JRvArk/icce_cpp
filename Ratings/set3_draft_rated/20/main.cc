// HB: rating: ?

#include "main.ih"

int main(int argc, char *argv[])
{
    string mode = argv[1];
    ArgumentStruct argumentStruct = checkMode(mode); // HB: again, this function makes things more complicated than it needs to be
    
    if (argumentStruct.charArg)
        cout << charCount() << '\n';
    else if (argumentStruct.wordArg)
        cout << wordCount() << '\n';
    else if (argumentStruct.lineArg)
        cout << lineCount() << '\n';
    
}
