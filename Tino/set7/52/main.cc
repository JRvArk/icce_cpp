#include <iostream>
#include <ctime>

using namespace std;

ostream &now(ostream &os)
{
    time_t now = time(nullptr);

    tm* local = localtime(&now);

    os << put_time(local, "%a %b %d %H:%M:%S %Y");

    return os;
}

int main()
{
    cout << now << '\n';
}