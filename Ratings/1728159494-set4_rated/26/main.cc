// Testing file for Person
#include "person/person.h"

#include <iostream>

int main()
{
    Person test = Person();

    test.extract(std::cin);
    test.insert(std::cout);
}