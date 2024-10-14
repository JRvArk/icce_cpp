#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <memory>
#include "dataImpl.ih"

class Data
{
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
