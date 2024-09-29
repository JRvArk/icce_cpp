#ifndef INCLUDED_BOTTLE_
#define INCLUDED_BOTTLE_

class Bottle
{
    public:
        Bottle(double capacity);

        double getCapacity() const;
        double getAmount() const;
        
        void addWater(double capacity);
        void removeWater(double amount);

    private:
        double d_capacity;
        double d_amount;
};

#endif