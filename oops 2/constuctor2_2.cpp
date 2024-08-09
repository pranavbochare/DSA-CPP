#include<iostream>
using namespace std;
class car{
    public:
    int price;
    string name;
    int seats;
    string type;

    car(int p,string n,int s,string t){
        price=p;
        name=n;
        seats=s;
        type=t;
    }
};

void print(car p){
    cout<<p.price<<" "<<p.name<<" "<<p.seats<<" "<<p.type<<endl;
}
int main()
{
    car p(1200000,"nexon",5,"suv");
    print(p);
}