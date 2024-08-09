#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;

    student(string n,int r,float m){
        name=n;
        rno=r;
        marks=m;
    }

    float getmarks(){   // getter
        return marks;
    }

    void setmarks(float m){   // setter
        marks=m;
    }

    void display(student s){
        cout<<s.name<<" "<<s.rno<<" "<<s.marks<<endl;
    }

    private:
    float marks;
};
int main()
{
    student s1("pranav",38,8.98);
    s1.display(s1);
    cout<<s1.getmarks()<<endl;
    s1.setmarks(98.5);
    s1.display(s1); 
}