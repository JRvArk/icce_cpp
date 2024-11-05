//JB: ?
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

ostream &now(ostream &os)
{
    //JB: COCO (and C)
    time_t now = time(nullptr);     // Get current time

    //JB: COCO
    tm* local = localtime(&now);    // Convert time_t to tm.
                                    // Insert time into os in asctime format.
    //JB: If you're not checking for null returns,
    //JB: you could CTR.
    //JB: Don't DIY, use %c.
    os << put_time(local, "%a %b %d %H:%M:%S %Y");

    return os;
}

int main()
{
    cout << now << '\n';
}
