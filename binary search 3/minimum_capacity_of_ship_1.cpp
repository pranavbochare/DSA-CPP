#include<iostream>
#include<climits>
using namespace std;
bool check(int mid,int arr[],int days){
    int n=6;
    int m=mid;
    int count=1;   // number of days
    for(int i=0;i<n;i++){
       if(m>=arr[i]){
        m-=arr[i];
       }
       else{
        count++;
        m=mid;
        m-=arr[i];
       }
    }
    if(count>days) return false;
    else return true;
}
int main()                         // TC = O(nlog(sum-max))
{
    int arr[]={3,2,2,4,1,4};
    int n=6;
    int days=3;
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        sum+=arr[i];
    }
    int low=max;
    int high=sum;
    int minCapacity=sum;    // 1 din me le ja sakte hai
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(mid,arr,days)==true){
            minCapacity=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<minCapacity;
}