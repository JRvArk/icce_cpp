#include "../person.ih"

Person::Person(std::string const &name, std::string const address,
                std::string const &phone, size_t mass)
{
    d_name = name;
    d_address = address;
    d_phone = phone;
    d_mass = mass;
}