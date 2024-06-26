#include<iostream>
using namespace std;
void print(int n,int x){
    if(x>n) return;
    cout<<x<<endl;
    print(n,x+1);
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(n,1);
}