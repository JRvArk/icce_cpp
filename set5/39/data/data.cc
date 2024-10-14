#include "data.ih"

class Data::Impl {
    std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const;
};

bool Data::read()
{
    return impl->read();
}

void Data::display() const
{
    impl->display();
}