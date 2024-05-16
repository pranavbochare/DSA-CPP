#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="abcdefgh";
    // str.substr(idx)     idx ke aage ke sab print kar do
    cout<<str.substr(2)<<endl;

    // str.substr(idx.len)     idx ke aage ke sab aur len tak print kar do
    cout<<str.substr(1,5);

}