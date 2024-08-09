#include<iostream>
using namespace std;
class vehicle{
public:
    string type;
    int speed;
    float mileage;
};

class fourWheeler : public vehicle{
public: 
    bool sunroof;
};

class twoWheeler : public vehicle{
public:
    int bhp;
};

class scooty : public twoWheeler{
public:
    int bootspace;
};
int main()
{
    scooty s1;
    s1.type="twowheeller";
    s1.bhp=110;
    s1.bootspace=220;
    s1.mileage=42.6;
    s1.speed=90;

    cout<<s1.bhp<<" "<<s1.bootspace<<" "<<s1.mileage<<" "<<s1.speed<<" "<<s1.type;
}