#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(15);
    s.insert(1);
    for(int ele : s){
        cout<<ele<<" ";
    }
}