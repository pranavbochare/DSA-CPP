#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;  //you need not metion the size
    // inserting / input do not use []
    v.push_back(6);
    // v[1]=9;   don't use
    v.push_back(9);
    v.push_back(8);
    v.push_back(5);
    // if you want to update or access use []
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}