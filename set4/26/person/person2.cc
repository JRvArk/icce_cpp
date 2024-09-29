#include "person.ih"

Person::Person(string const &name, string const &address, string const &phone, 
               string const &mass)
{
    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(mass);
}
