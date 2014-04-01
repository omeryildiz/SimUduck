#include <FlyBehavior.h>
#ifndef DUCK_H
#define DUCK_H


class Duck
{
    public:
        Duck();
        ~Duck();
        void quack();
        void swim();
        virtual void display();
        void performFly();
        void setFlyBehavior(FlyBehavior* fb);
        FlyBehavior* fBehavior;
    protected:
    private:



};

#endif // DUCK_H
