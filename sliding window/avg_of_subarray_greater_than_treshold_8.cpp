#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,13,17,23,29,31,7,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;     // size of subarray
    int th=5;    // threshold
    int count=0;
    int preSum=0;
    for(int i=0;i<k;i++){
        preSum+=arr[i];
    }
    if((preSum/k)>=th) count+=1;
    int i=1;
    int j=k;
    while(j<n){
        int currSum=preSum+arr[j]-arr[i-1];
        int avg=currSum/k;
        if(avg>=th) count++;
        preSum=currSum;
        i++;
        j++;
    }
    cout<<count;
}