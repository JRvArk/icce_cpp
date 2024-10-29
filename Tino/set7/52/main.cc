#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

ostream &now(ostream &os)
{
    time_t now = time(nullptr);     // Get current time

    tm* local = localtime(&now);    // Convert time_t to tm.
                                    // Insert time into os in asctime format.
    os << put_time(local, "%a %b %d %H:%M:%S %Y");

    return os;
}

int main()
{
    cout << now << '\n';
}