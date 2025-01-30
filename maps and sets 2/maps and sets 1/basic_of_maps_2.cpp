#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    // pair<string,int> p1;
    // p1.first="pranav";
    // p1.second=38;
    // pair<string,int> p2;
    // p2.first="prasad";
    // p2.second=39;
    // pair<string,int> p3;
    // p3.first="pratham";
    // p3.second=40;
    // m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    m["pranav"]=38;
    m["prasad"]=39;    // uper ka comment is equal to these three lines
    m["pratham"]=40;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("pranav");
    cout<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
}