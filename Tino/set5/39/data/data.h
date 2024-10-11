#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>
#include <memory>

class Data
{
    std::unique_ptr<DataImpl> impl;

    public:
        Data() : impl(std::make_unique<DataImpl>()) {};
};

class DataImpl
{
    // std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const; 
};
        
#endif
