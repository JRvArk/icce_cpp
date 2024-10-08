// AI: You overcomplicated this
#include "person.ih"

// AI: Wasn't mass supposed to be a size_t?
Person::Person(string const &name, string const &address, string const &phone, 
               string const &mass)
{
    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(mass);
}

// AI: I will leave here a small example of how you could have done this
// AI: In this example, you don't need to make use of the setters
// AI: Also, for this to work, you don't need to have your data members
// AI: Defined in the private section
// Person::Person(string const &name, string const &address,
//                string const &phone, size_t mass)
// :
//     d_name(name),
//     etc...
// {}
