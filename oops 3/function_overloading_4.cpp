#include<iostream>
using namespace std;
class overloading{
public:
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    // int sum(int a,int b){      // show error
    //     cout<<a+b<<endl;
    // }

    // void sum(float a,float b){   // does not work
    //     cout<<a+b<<endl;
    // }
};
int main()
{
    overloading a;
    a.sum("pranav","Bochare");
    a.sum(2,5);
    a.sum(3,7,4);
    //a.sum(3.2,6.7); show error
    

}