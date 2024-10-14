#include "person.ih"

void Person::setPhone(string const &phone)
{
    if(phone.empty())
        d_phone = "unknown";
    else if(phone.find_first_not_of("0123456789") == string::npos)
        d_phone = phone;
    else
    {
        cout << "Please provide a phone number only containing digits.\n";
        d_phone = "wrong input";
    }
};
