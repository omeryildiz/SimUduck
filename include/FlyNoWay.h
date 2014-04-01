#include <FlyBehavior.h>
#ifndef FLYNOWAY_H
#define FLYNOWAY_H


class FlyNoWay:public FlyBehavior
{
    public:
        FlyNoWay();
        virtual ~FlyNoWay();
        void fly();
    protected:
    private:
};

#endif // FLYNOWAY_H
