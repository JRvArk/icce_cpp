#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double value = 12.04;

    cout << "std display         \"" << setw(15) << value << "\"\n"
         << "left alignedd       \"" << setw(15) << left << value << "\"\n"
         << "right aligned       \"" << setw(15) << right << value << "\"\n"
         << "3 digits            \"" << setw(15) << setprecision(3) << fixed 
         << value << "\"\n"
         << "4-digit fraction    \"" << setw(15) << setprecision(4) << fixed
         << value << "\"\n"
         << "std display         \"" << setw(15) << value << "\"\n";
}