#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>
#include <iostream>

class Person
{
    std::string d_name;
    std::string d_address;
    std::string d_phone;
    size_t      d_mass;

    public:
        Person() : d_name("unknown"),
                   d_address("unknown"),
                   d_phone("unknown"),
                   d_mass(0) {};
        Person(std::string const &name,
               std::string const &address,
               std::string const &phone,
               size_t mass);

        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t const mass);

        std::string const &name() const
        {
            return d_name;
        }
        std::string const &address() const
        {
            return d_address;
        }
        std::string const &phone() const
        {
            return d_phone;
        }
        size_t const mass() const
        {
            return d_mass;
        }

                                    // Insert info on this person into os.
        void insert(std::ostream &os) const;
                                    // Set data members using data from is.
        void extract(std::istream &is);
};
        
#endif
