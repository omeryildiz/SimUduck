#include "DecoyDuck.h"
#include <iostream>
using namespace std;

DecoyDuck::DecoyDuck()
{
    fBehavior = new FlyNoWay();
}

DecoyDuck::~DecoyDuck()
{
    //delete fBehavior; in Duck
}
void DecoyDuck::display()
{

    cout<<"Sahte su ordegi gorundu!"<<endl;
}
