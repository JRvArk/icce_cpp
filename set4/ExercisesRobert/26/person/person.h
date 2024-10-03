#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>

class Person
{
    std::string d_name;
    std::string d_address;
    std::string d_phone;
    size_t      d_mass;
    
    public:
        Person();
        Person(std::string const &name, std::string const address,
                std::string const &phone, size_t mass);

        void setName(std::string const &name);
        void setAddress(std::string const &address); 
        void setPhone(std::string const &phone); 
        void setMass(size_t mass);

        std::string const &name()    const; 
        std::string const &address() const; 
        std::string const &phone()   const; 
        size_t mass()                const;

        void insert(std::ostream &os);
        void extract(std::istream &is);
};
        
#endif
