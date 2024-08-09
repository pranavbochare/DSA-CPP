#include<iostream>
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

    student s2=s1;      // deep copy
    s2.name="vinay";

    student s3(s1);   // copy constructor // deep copy
    s3.name="parth";

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;

}