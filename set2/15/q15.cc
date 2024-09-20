#include <iostream>
#include <string>

using namespace std;

int main()
{
        string input;
        while (cin >> input)
        {
                string output = "";
                size_t nb_bytes = 0;
                size_t idx = 0;
                while (idx < input.size())
                {
                        if ((input[idx] & 0b10000000) == 0)
                                nb_bytes = 1;
                        else if ((input[idx] & 0b11100000) == 0b11000000)
                                nb_bytes = 2;
                        else if ((input[idx] & 0b11110000) == 0b11100000)
                                nb_bytes = 3;
                        else if ((input[idx] & 0b11111000) == 0b11110000)
                                nb_bytes = 4;

                        output = input.substr(idx, nb_bytes) + output;
                        idx += nb_bytes;
                }
                cout << output;
        }
}
