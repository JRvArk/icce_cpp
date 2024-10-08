#include "person.ih"
#include <iostream>
#include <sstream>


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
}
