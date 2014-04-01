#include <MallardDuck.h>
#include <iostream>
#include <Duck.h>
#include <FlyWithWings.h>
using namespace std;

MallardDuck::MallardDuck()
{
    //FlyWithWings ucanKanatli;
    //fBehavior = ucanKanatli;
    fBehavior = new FlyWithWings();
    cout<<"Mallard Ordegi olusturuldu"<<endl;
}
MallardDuck::~MallardDuck()
{
    cout<<"Mallard Ordegi oldu"<<endl;
}


void MallardDuck::display()
{
    cout<<"Mallar ordegi gorundu!"<<endl;
}

