#include <Duck.h>
#include <FlyNoWay.h>
#ifndef DECOYDUCK_H
#define DECOYDUCK_H


class DecoyDuck:public Duck,public FlyNoWay
{
    public:
        DecoyDuck();
        virtual ~DecoyDuck();
        void display();
    protected:
    private:
};

#endif // DECOYDUCK_H
