#ifndef PROGRAM_H
#define PROGRAM_H

#include <vector>

#include "../26/person/person.h"

void readPersons(std::vector<Person> &persons, size_t amt);
void writePersons(std::vector<Person> const &persons);

#endif