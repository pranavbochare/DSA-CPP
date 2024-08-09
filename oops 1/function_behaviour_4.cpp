#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    int price;
    string type;
    int seats;
};
void change(car c2){         // add & for pass by reference
    c2.name="porche 911";
}
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<endl;
}
int main()
{
    car c1;
    c1.name="audi";
    c1.price=1000000;
    c1.type="sports car";
    c1.seats=2;

    print(c1);
    change(c1);     // pass by value ho raha hai
    print(c1);      // for pass by reference add & in change function
}