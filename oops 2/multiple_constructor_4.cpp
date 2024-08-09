#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

    student(){          // for s2

    }

    student(string n,int r,float g){     // for s3
        name=n;
        rno=r;
        gpa=g;
    }

    student(string n,int r){    // for s1
        name=n;
        rno=r;
    }

    student(int r,string n,float g){   // for s4
        name=n;
        rno=r;
        gpa=g;
    }
};
int main()
{
    student s1("pranav",38); 
    s1.gpa=8.98;
    
    student s2;       
    s2.name="vinay";    
    s2.rno=25;         
    s2.gpa=9.5;

    student s3("rushi",45,9.2);

    student s4(42,"parth",9.1);

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
}