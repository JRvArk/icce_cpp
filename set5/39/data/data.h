#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <memory>
#include <string>

class Data
{
    class DataImpl
    {
        std::string d_text;
        int d_value = 0;

        public:
            bool read();
            void display() const; 
    };
    std::unique_ptr<DataImpl> impl;

    public:
        Data() : impl(std::make_unique<DataImpl>()) {};
        ~Data() = default;
        bool read()
        {
            return impl->read();
        }
        void display() const
        {
            impl->display();
        }
};
        
#endif
