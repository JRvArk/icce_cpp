#include "main.ih"

using namespace std;

int main()
{
    Person testPerson{};
    
    testPerson.extract(cin);
    testPerson.insert(cout);
}