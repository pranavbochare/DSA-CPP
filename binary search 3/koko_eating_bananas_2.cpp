#include<iostream>
#include<climits>
using namespace std;
bool check(int speed,int arr[],int hour){
    int n=4;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=speed) count++;
        if(arr[i]%speed==0) count+=arr[i]/speed;
        if(arr[i]>speed) count+=arr[i]/speed+1;
    }
    if(count>hour) return false;
    else return true; 
}
int main()
{
    int arr[]={3,6,7,11};
    int n=4;
    int hour=8;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int low=1;
    int high=max;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(mid,arr,hour)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;
}