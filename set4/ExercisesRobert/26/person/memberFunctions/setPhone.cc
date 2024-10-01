#include "../person.ih"

void Person::setPhone(const string &phone)
{
    if (phone.empty())
        d_phone = "-- not available --";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;
    else 
        cout << "A phone number may only contain digits";
}

bool hasOnly(char const *content, string const &object)
{
    return object.find_first_not_of(content) == string::npos;
}