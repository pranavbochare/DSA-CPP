#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int x=INT_MAX;
    cout<<x<<endl;
    cout<<(x+2)%5<<endl;  // this will not work,value out of bucket
    cout<<(x%5 + 2%5) % 5<<endl;  // this will work , modulo property
}