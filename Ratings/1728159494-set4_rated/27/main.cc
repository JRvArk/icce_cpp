// AI: 0
#include "program.ih"

int main(int argc, char *argv[])
{
    size_t numPeople;
    // AI: This is good practice!
    if(argc > 1)                    // Get numPeople from arguments if provided.
        numPeople = stoi(argv[1]);
    else                            // Use predefined numPeople.
        numPeople = STD_NUM_PEOPLE; 
    
    // AI: Why vector?
    // AI: Why not just using an array?
    // AI: NC
    vector<Person> people;
    readPersons(people, numPeople);
    writePersons(people);
}