#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

    student(){

    }

    student(string n,int r,float g){
        name=n;
        rno=r;
        gpa=g;
    }
};
int main()
{
    student s1("pranav",38,8.98);  // 1 
    
    student s2;        // 2
    s2.name="vinay";   // if you want to run  1 & 2 this simultaneously 
    s2.rno=25;         // then add default constructor
    s2.gpa=9.5;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}