#include<iostream>
using namespace std;
class scooty{
public:
    int speed;
    float avg;
                             // virtual function
    virtual void sound(){   // if we removed virtual then it will print
        cout<<"vroom vroom"<<endl;    // zroom zroom
    }
};

class bike : public scooty{
public:
    int gears;

    void sound(){
        cout<<"zroom zroom"<<endl;
    }
};

class superbike : public scooty{
public:
    void sound(){
        cout<<"broom broom"<<endl;
    }
};
int main()
{
    scooty* a=new bike();
    a->sound();
    scooty* b=new superbike();
    b->sound();
}