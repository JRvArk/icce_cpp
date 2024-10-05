#include "main.ih"

int main()
{
    size_t nrPeople = 5;
    Person people[nrPeople];

    readPersons(people, nrPeople);
    writePersons(people, nrPeople);
}