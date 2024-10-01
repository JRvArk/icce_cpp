#include "main.ih"

bool printCall(bool ok, size_t nr, string value)
{
    if (ok == false)
    {
        usageMsg();
        return false;
    }
    // HB: why is a print function responsible for checking this? 
    // HB: it would make more sense for this function to return void
    // HB: and for this check to be in the structCall function.

    else
    {
        cout << "Argument number: " << nr << '\n'
             << "Its value:       " << value << '\n';
        return true;
    }
}
