// AI: 0
#ifndef INCLUDED_BOTTLE_
#define INCLUDED_BOTTLE_

class Bottle
{
    double d_capacity;
    double d_amount;

    public:
        Bottle(double capacity);

        double capacity() const;
        double amount() const;
        
        // AI: I don't get why when you add water you use capacity
        // AI: And when you remove water you use amount
        // AI: Wouldn't this lead to capacity and amount being the same thing?
        void addWater(double capacity);
        void removeWater(double amount);
};

#endif