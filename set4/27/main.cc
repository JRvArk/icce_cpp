#include "program.ih"

int main(int argc, char *argv[])
{
    size_t numPeople;
    if(argc > 1)                    // Get numPeople from arguments if provided.
        numPeople = stoi(argv[1]);
    else                            // Use predefined numPeople.
        numPeople = STD_NUM_PEOPLE; 
    
    Person people[numPeople];
    readPersons(people, numPeople);
    writePersons(people, numPeople);
}