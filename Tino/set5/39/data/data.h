#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <memory>
#include "dataImpl.h"

class Data
{
    std::unique_ptr<DataImpl> impl;

    public:
        Data() : impl(std::make_unique<DataImpl>()) {};
};
        
#endif
