#include <FlyBehavior.h>
#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H


class FlyWithWings:public FlyBehavior
{
    public:
        FlyWithWings();
        virtual ~FlyWithWings();
        void fly();
    protected:
    private:
};

#endif // FLYWITHWINGS_H
