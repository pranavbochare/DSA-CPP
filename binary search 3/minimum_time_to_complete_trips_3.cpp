#include<iostream>
#include<climits>
using namespace std;
bool check(int mid,int arr[],int totaltrips){
    int n=3;
    int trips=0;
    for(int i=0;i<n;i++){
        trips+=mid/arr[i];
    }
    if(totaltrips>trips) return false;
    else return true;
}
int main()
{
    int arr[]={1,2,3};
    int n=3;
    int totaltrips=5;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int low=1;
    int high=max*totaltrips;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(mid,arr,totaltrips)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;
}