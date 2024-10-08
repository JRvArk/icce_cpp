// AI: 0
#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>
#include <iostream>

// AI: Also, you have functions that could have been inlined in this file
class Person
{
    // AI: You could have placed here the data members

    public:
        Person(); // 1
        // AI: Why is 'mass' a string? Shouldn't it be a size_t?
        // AI: Your data member is a size_t
        // AI: Also, it wasn't necessary to provide default values here
        // AI: You can directly do that to the data members
        Person(std::string const &name,
               std::string const &address = "unknown",
               std::string const &phone = "unknown",
               std::string const &mass = "0"); // 2

        // AI: Newlines necessary for layout
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(std::string const &mass);

        std::string const &name() const;
        std::string const &address() const;
        std::string const &phone() const;
        size_t mass() const;

                                    // Insert info on this person into os.
        void insert(std::ostream &os) const;
                                    // Set data members using data from is.
        void extract(std::istream &is);

        // AI: Newlines necessary for layout
        // AI: Also, why in the private section?
        // AI: This makes it more difficult for you
        // AI: To set the data members in constructor #2
    private:
        std::string d_name;         // name of person
        std::string d_address;      // address field
        std::string d_phone;        // telephone number
        // AI: Here you could have initialized 'mass' to 0
        size_t      d_mass;         // the mass in kg
};
        
#endif
