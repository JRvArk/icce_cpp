#include "program.ih"

void writePersons(const vector<Person> &persons)
{
    for(const auto &person : persons)
        person.insert(cout);
        cout << '\n';
}