#include<iostream>
using namespace std;
int main()
{
    // stoi
    string str="1234567899";
    int x=stoi(str);
    cout<<x<<endl;

    // stoll
    string s="1234567899876548888";
    long long y=stoll(s);
    cout<<y<<endl;

}