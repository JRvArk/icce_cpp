#include "person.ih"

void Person::extract(istream &is) const
{
    string text;
    getline(text, ',');
    setName(text);
    
    getline(text, ',');
    setAddress(text);
    
    getline(text, ',');
    setPhone(text);
    
    getline(text, '\n');
    setMass(stoi(text));
}
