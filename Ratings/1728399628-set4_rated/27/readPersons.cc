#include "program.ih"

void readPersons(Person *persons, size_t amt)
{
    for (size_t idx = 0; idx < amt; ++idx)
    {
        cout << "? ";
        Person person = Person();
        person.extract(cin);        // Read data from cin to person.
        // AI: The purpose of extract was exactly to
        // AI: Read a person's data from cin into a person
        // AI: Here you manually assign the person to persons[idx]
        persons[idx] = person;
    }
}
