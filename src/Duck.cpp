#include "Duck.h"
#include <iostream>
using namespace std;

Duck::Duck()
{
    cout<<"normal ordek olusturuldu!"<<endl;
}

Duck::~Duck()
{
    delete fBehavior;
    cout<<"normal ordek cortladi"<<endl;
}
void Duck::quack()
{
    cout<<"Vak vak vak!"<<endl;
}
void Duck::swim()
{
    cout<<"Ordek yuzuyor"<<endl;
}
void Duck::display()
{
    cout<<"Ordek gorundu!"<<endl;
}
void Duck::performFly()
{
    fBehavior->fly();
}
void Duck::setFlyBehavior(FlyBehavior* fb)
{
    fBehavior = fb;
}
