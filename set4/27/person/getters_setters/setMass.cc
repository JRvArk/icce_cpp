#include "../person.ih"

void Person::setMass(string const &mass)
{
    if(mass.find_first_not_of("0123456789") != string::npos or mass.empty())
        cout << "Provide a correct mass, or 0.\n";
    else 
    {
        size_t intMass = stoi(mass);
        if(intMass < 0)
            cout << "Provide a positive mass, or 0.\n";
        else
            d_mass = intMass;
    }
}