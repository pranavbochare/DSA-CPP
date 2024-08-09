#include<iostream>
using namespace std;
class fraction{
public:
    int num;
    int den;

    fraction(int n,int d){
        num=n;
        den=d;
    }

    void display(){
        cout<<num<<"/"<<den<<endl;
    }

    fraction operator + (fraction f){      // fraction add(fraction f)
        int newnum=num*f.den + f.num*den;  // + - * / also work
        int newden=den*f.den;
        fraction ans(newnum,newden);
        return ans;
    }

};
int main()
{
    fraction f1(1,3);
    fraction f2(2,4);
    f1.display();
    f2.display();
    fraction f3=f1+f2;    // fraction f3=f1.add(f2);
    f3.display();
}