#include "ModelDuck.h"
#include <FlyNoWay.h>
#include "iostream"
using namespace std;

ModelDuck::ModelDuck()
{
    fBehavior = new FlyNoWay();
}

ModelDuck::~ModelDuck()
{
    //dtor
}

void ModelDuck::display()
{
    cout<<"Model ordek gorundu."<<endl;
}
