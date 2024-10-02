// HB: rating: ?

#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc != 2)
        cout << "Give an argument: -c, -w, or -l.\n";
    else
    {
        string const mode = argv[1];
                                        // First check for correct argument.
        if (mode.front() == '-' and mode.size() == 2)
            checkMode(mode.back());
        else
            cout << "A wrong argument is given.\n";
    }
}
