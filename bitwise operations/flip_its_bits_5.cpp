#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int temp=n;
    n=n | (n>>1);
    n=n | (n>>2);
    n=n | (n>>4);
    n=n | (n>>8);
    n=n | (n>>16);

    int ans=temp ^ n;
    cout<<ans;
}