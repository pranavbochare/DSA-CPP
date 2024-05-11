#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter number of students : ";
    cin>>size;
    int marks[size];
    for(int i=0;i<size;i++){
        cout<<"enter marks of student "<<i+1<<" : ";
        cin>>marks[i];
    }
    cout<<"roll number of students whose marks are less than 35 : ";
    for(int i=0;i<size;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}