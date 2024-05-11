#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(3);
    v.push_back(6);
    // we can print using cout<<v.at(2); instead of cout<<v[2];
    cout<<v[2]<<endl;
    cout<<v.at(2);
}