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

void change(cricketer* c){
    c -> name="rohit sharma";     // (*c).name="rohit sharma";     
}
int main()
{
    cricketer c1("virat kohli",25000,55.8);

    cricketer *p1=&c1;
    cout<<p1 -> runs<<endl;    // cout<<(*p1).runs<<endl;

    cout<<c1.avg<<endl;
    c1.avg=67.5;
    cout<<c1.avg<<endl;

    cout<<p1 -> name<<endl;
    change(&c1);
    cout<<p1 -> name<<endl;

}