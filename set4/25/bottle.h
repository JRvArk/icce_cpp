#ifndef INCLUDED_BOTTLE_
#define INCLUDED_BOTTLE_

class Bottle
{
    double d_capacity;
    double d_amount;

    public:
        Bottle(double capacity);

        double getCapacity() const;
        double getAmount() const;
        
        void addWater(double capacity);
        void removeWater(double amount);
};

#endif