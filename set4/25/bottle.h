#ifndef BOTTLE_H
#define BOTTLE_H

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