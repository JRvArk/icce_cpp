#include "program.ih"

void readPersons(Person *persons, size_t amt)
{
    for (size_t idx = 0; idx < amt; ++idx)
    {
        cout << "? ";
        Person person = Person();
        person.extract(cin);        // Read data from cin to person.
        persons[idx] = person;
    }
}
