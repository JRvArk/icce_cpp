#include "person.ih"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void Person::extract(istream &is)
{
    string input;
    getline(is, input);
    istringstream iss(input);
    
    string part;
    getline(iss, part, ',');
    setName(part);
    getline(iss, part, ',');
    setAddress(part);
    getline(iss, part, ',');
    setPhone(part);
    getline(iss, part);
    setMass(stoi(part));
}
