// AI: You might need to rethink this function
#include "person.ih"
#include <iostream>
#include <sstream>
#include <vector>

// AI: Duplicated with internal header
using namespace std;

void Person::extract(istream &is)
{
    // AI: This is overcomplicated
    string input;
    getline(is, input);
    istringstream iss(input);
    
    // AI: You could have read using getline and a delimiter
    // AI: Into each one of the data members directly
    string part;
    getline(iss, part, ',');
    setName(part);
    getline(iss, part, ',');
    setAddress(part);
    getline(iss, part, ',');
    setPhone(part);
    getline(iss, part);
    setMass(part);
}
