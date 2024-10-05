#include "main.ih"

void readPersons(Person people[], size_t nrPeople)
{
    for(size_t idx = 0; idx != nrPeople; ++idx)
    {
        cout << "? ";
        Person person{};
        person.extract(cin);
        people[idx] = person;
    }
}