#include "person.ih"

Person::Person(string const &name, string const &address, string const &phone, 
               size_t mass)
{
    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(mass);
}
