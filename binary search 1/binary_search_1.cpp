#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int target=15;
    bool flag=false;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;    // mid=(low+high)/2;
        if(arr[mid]==target){
            flag=true;
            break;
            }
        if(arr[mid]<target) low=mid+1;
        if(arr[mid]>target) high=mid-1;
    }
    if(flag==true) cout<<"present";
    else cout<<"absent";
}