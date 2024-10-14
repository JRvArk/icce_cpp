#include "person.ih"

Person::Person(string const &name, string const &address, string const &phone, 
               size_t mass)
:
    d_mass(mass)
{                                   // Logic checks for everything except mass
    setName(name);
    setAddress(address);
    setPhone(phone);
}
