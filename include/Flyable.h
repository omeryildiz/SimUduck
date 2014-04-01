#ifndef FLYABLE_H
#define FLYABLE_H


class Flyable
{
    public:
        Flyable() {}
        virtual ~Flyable() {}
        virtual void fly()=0;
    protected:
    private:
};

#endif // FLYABLE_H
