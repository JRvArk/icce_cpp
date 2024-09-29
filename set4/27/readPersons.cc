#include "program.ih"

void readPersons(vector<Person> &persons)
{
    for (auto &person : persons)    // Loop over all persons in list.
    {
        cout >> '? ';
        person.extract(cin);        // Read data from cin to person.
    }
}
