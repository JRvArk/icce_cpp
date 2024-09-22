#include "main.ih"

bool printCall(bool ok, size_t nr, string value)
{
    if (ok == false)
    {
        usageMsg();
        return false;
    }
    else
    {
        cout << "Argument number: " << nr << '\n'
             << "Its value:       " << value << '\n';
        return true;
    }
}