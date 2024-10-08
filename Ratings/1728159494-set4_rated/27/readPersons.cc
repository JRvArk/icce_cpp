#include "program.ih"

void readPersons(std::vector<Person> &persons, size_t amt)
{
    for (size_t num = 0; num < amt; ++num)
    {
        cout << "? ";
        Person person = Person();
        person.extract(cin);        // Read data from cin to person.
        persons.push_back(person);
    }
}
