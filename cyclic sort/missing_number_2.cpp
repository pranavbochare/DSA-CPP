#include<iostream>
using namespace std;
int main()
{
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int correctIdx=arr[i];
        if(i==correctIdx || arr[i]==n) i++;
        else swap(arr[i],arr[correctIdx]);          // tc O(n)
    }                                               // sc O(1)
    for(int i=0;i<=n;i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
    }
}