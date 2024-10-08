#include "program.ih"

void writePersons(const Person *persons, size_t amt)
{
    for (size_t idx = 0; idx < amt; ++idx)
        persons[idx].insert(cout);  // Write person at idx their data to cout.
}