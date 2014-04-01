#include <FlyBehavior.h>
#ifndef FLYWITHROCKET_H
#define FLYWITHROCKET_H


class FlyWithRocket:public FlyBehavior
{
    public:
        FlyWithRocket();
        virtual ~FlyWithRocket();
        void fly();
    protected:
    private:
};

#endif // FLYWITHROCKET_H
