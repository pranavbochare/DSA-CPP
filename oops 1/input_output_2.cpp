#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rno;                        
    float gpa;
};
int main()
{
    student s;      
    cout<<"enter name : ";
    cin>>s.name;                
    cout<<"enter gpa : ";
    cin>>s.gpa;
    cout<<"enter roll number : ";
    cin>>s.rno;
    cout<<s.name<<" "<<s.gpa<<" "<<s.rno;
}