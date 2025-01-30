#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(9);
    s.insert(2);      //set stores only unique elements
    int tar=6;

    if(s.find(tar)!=s.end()) cout<<"exists"<<endl;
    else cout<<"does not exists"<<endl;  // s.find() = it searches in the set
    // if element is not found then it return last element
    
    cout<<s.size()<<endl;
    s.erase(2); 
    cout<<s.size()<<endl;
    for(int ele : s){    // you can use auto instead of int
        cout<<ele<<" ";
    }
}