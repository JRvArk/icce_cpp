#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string valueString = argv[1];
    size_t sum;
    do 
    {
        sum = 0;
        for (size_t i = 0; i < valueString.length(); i++)
            sum += valueString[i] - '0';
        valueString = to_string(sum);
    } while(sum >= 10);

    if (sum != 0 && sum % 3 == 0)
        cout << "divisible by 3" << '\n';
    else
        cout << "not divisible by 3" << '\n';
}