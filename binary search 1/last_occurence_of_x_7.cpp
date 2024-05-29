#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,4,4,4,5};
    int n=8;
    int x=3;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid+1]==x){
                low=mid+1;
            }
            else{
                flag=true;
                cout<<mid;
                break;
            }
        }
        if(arr[mid]<x) low=mid+1;
        if(arr[mid]>x) high=mid-1;
    }
    if(flag==false) cout<<-1;
}