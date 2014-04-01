#include <iostream>
#include <Duck.h>
#include <MallardDuck.h>
#include <RubberDuck.h>
#include <DecoyDuck.h>
#include <ModelDuck.h>
#include <FlyWithRocket.h>
using namespace std;


void RubberDuck::quack()
{
    cout<<"vick vick"<<endl;
}

int main()
{
    //Duck ordek;
    Duck* ord = new MallardDuck();
    Duck* ducord = new DecoyDuck();
    Duck* modelDuck = new ModelDuck();
    int input;
    //MallardDuck malOrdek;
    //RubberDuck plastikOrdek;
    //DecoyDuck yalanciOrdek;
    cout<<"************************************************************"<<endl;
    cout<<"Mallard ordegine bakýlýyor"<<endl;
    ord->quack();
    ord->performFly();
    ord->swim();
    cout<<"************************************************************"<<endl;
    cout<<"************************************************************"<<endl;
    ducord->display();
    ducord->quack();
    ducord->performFly();
    cout<<"************************************************************"<<endl;
    cout<<"*********************Model Duck***********************"<<endl;
    modelDuck->display();
    modelDuck->swim();
    modelDuck->performFly();

    cout<<"Ordege ucma ozelligi kazandirmak icin 5'e basiniz>>";
    cin>>input;
    if(input==5)
        modelDuck->setFlyBehavior(new FlyWithRocket());
    cout<<"Model ordek ucmayi deniyor..."<<endl;
    modelDuck->performFly();

    cout<<"************************************************************"<<endl;
    return 0;
}
