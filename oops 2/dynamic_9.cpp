#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;

    cricketer(string n,int r,float a){
        name=n;
        runs=r;
        avg=a;
    }
};
int main()
{
    cricketer c1("virat kohli",25000,55.8);
    cricketer *c2=new cricketer("rohit sharma",18000,67.6);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;

    //  cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
}