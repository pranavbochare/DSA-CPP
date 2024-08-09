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
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<endl;
}
int main()
{
    car c1;
    c1.name="nexon";
    c1.price=1000000;
    c1.type="suv";
    c1.seats=5;

    car c2;
    c2.name="honda city";
    c2.price=1500000;
    c2.type="sedan";
    c2.seats=5;

    print(c1);  // pasing objects to function
    print(c2);


}