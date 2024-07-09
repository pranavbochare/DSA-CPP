#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int correctIdx=arr[i];
        if(arr[i]==arr[correctIdx]){
            cout<<arr[i];
            break;
        }
        else swap(arr[i],arr[correctIdx]);
    }
}