#include "../person.ih"

void Person::setMass(size_t mass)
{
    if (mass < 0)
        cout << "provide a positive mass, or 0.\n";
    else
        d_mass = mass;
}