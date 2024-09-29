#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>
#include <iostream>

class Person
{
    public:
        Person();                   // 1
        Person(std::string const &name,
               std::string const &address = "unknown",
               std::string const &phone = "unknown",
               size_t mass = 0);    // 2
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);

        std::string const &name() const;
        std::string const &address() const;
        std::string const &phone() const;
        size_t mass() const;

                                    // Insert info on this person into os.
        void insert(std::ostream &os) const;
                                    // Set data members using data from is.
        void extract(std::istream &is) const;
    private:
        std::string d_name;         // name of person
        std::string d_address;      // address field
        std::string d_phone;        // telephone number
        size_t      d_mass;         // the mass in kg
};
        
#endif
