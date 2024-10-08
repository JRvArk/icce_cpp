#include "person.ih"

void Person::setAddress(string const &address)
{
    if(address.empty())
        d_address = "unknown";
    else
        d_address = address;
};
