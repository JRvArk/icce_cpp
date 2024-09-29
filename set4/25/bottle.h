#ifndef INCLUDED_BOTTLE_
#define INCLUDED_BOTTLE_

class Bottle
{
public:
    Bottle(double capacity);        
    double getCapacity();
    double getAmount();
    void addWater(double capacity);
    void removeWater(double amount);

private:
    double capacity;
    double amount;
};

#endif