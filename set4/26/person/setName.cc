#include "../person.ih"

void Person::setName(string const &name)
{
    if(name.empty())
        cout << "A person must have a name.\n";
    else
        d_name = name;
}