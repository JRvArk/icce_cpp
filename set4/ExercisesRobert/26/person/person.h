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
        void setName(std::string const &name);
        void setAddress(std::string const &address); 
        void setPhone(std::string const &phone); 
        void setMass(size_t mass);

        std::string const &name()    const; 
        std::string const &address() const; 
        std::string const &phone()   const; 
        size_t mass()                const;
};
        
#endif
