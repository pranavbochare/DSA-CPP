#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pre[n];
    int suf[n];
    // prefix array
    int p=arr[0];
    pre[0]=1;
    for(int i=1;i<n;i++){
        pre[i]=p;
        p*=arr[i];
    }
    // suffix array
    p=arr[n-1];
    suf[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suf[i]=p;
        p*=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]*suf[i]<<" ";
    }
}