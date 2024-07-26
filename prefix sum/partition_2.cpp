#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    // checking that any point exists
    bool flag=false;
    int idx=-1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[n-1]-arr[i+1-1]){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag){
        cout<<"it can be partitioned after index "<<idx;
    }
    else cout<<"not partitioned";
}