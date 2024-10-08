#include "person.ih"

void Person::extract(istream &is)
{
    string name;
    string address;
    string phone;
    string mass;

    getline(is, name, ',');
    getline(is, address, ',');
    getline(is, phone, ',');
    getline(is, mass);

    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(stoi(mass));
}
