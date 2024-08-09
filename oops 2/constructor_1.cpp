#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

    student(string n,int r,float g){
        name=n;
        rno=r;
        gpa=g;
    }
};
int main()
{
    student s1("pranav",38,8.98);
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa;
}