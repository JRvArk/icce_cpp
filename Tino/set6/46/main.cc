#include "main.ih"

int main()
{
    Symtab symtab;
    while (true)
    {
        cout << "? ";

        string line;
        cin >> line;

        cout << "inserted " << symtab.find(line).ident() << "\n"
             << "All symbols:\n";
        
        for (size_t idx = 0; idx != symtab.size(); ++idx)
            cout << symtab.at(idx).ident() << ' ';
        cout << '\n';
    }
}