#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max){    
    if(idx==n){
        cout<<max;
        return;
    }
    if(arr[idx]>max) max=arr[idx];
    printMax(arr,n,idx+1,max);
}

int maxInArray(int arr[],int n,int idx){
    if(n==idx) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main()
{
    int arr[]={2,4,14,53,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);

    cout<<endl;
    
    cout<<maxInArray(arr,n,0);
    
}