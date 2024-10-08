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
        
                                    // Add amount water to the bottle.
        bool addWater(double amount);
                                    // Remove amount water to the bottle.
        bool removeWater(double amount);
};

#endif