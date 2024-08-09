#include<iostream>
using namespace std;
class scooty{               // base or parent class
public:
    int speed;
    float mileage;
};

class bike : public scooty{   // child or derived class
public:
    int gears;
};
void display(bike b){
    cout<<b.gears<<" "<<b.mileage<<" "<<b.speed<<endl;
}
int main()
{
    bike b1;
    b1.gears=4;
    b1.mileage=55.3;
    b1.speed=120;
    display(b1);
}