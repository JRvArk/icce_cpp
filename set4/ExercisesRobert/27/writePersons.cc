#include "main.ih"

void writePersons(Person people[], size_t nrPeople)
{
    for (size_t idx = 0; idx != nrPeople; ++idx)
    {
        people[idx].insert(cout);
    }
}