#include<iostream>
using namespace std;
int main()
{
    int mod=100000000+7;
    int arr[26];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=25;i++){
        arr[i]=( (i % mod ) * ( arr[i-1]) % mod ) % mod;
    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<endl;
    }
}