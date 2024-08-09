#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rno;                        // attributes
    float gpa;
};
int main()
{
    student s;         //object = s             // declaration
    s.name ="pranav";
    s.gpa=8.98;                     // initialization
    s.rno=38;
    cout<<s.name<<" "<<s.gpa<<" "<<s.rno;
}