#include<iostream>
using namespace std;
int main()
{ 
    // 1 3 4 8 20 28 33 non sorted array
    int arr[]={6,8,20,28,33,1,3,4,5};
    int n=9;
    int target=20;
    int low=0;
    int high=n-1;
    int pivot=-1;
    // find pivot
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            pivot=mid;
            break;
        }
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            pivot=mid+1;
            break;
        }
        if(arr[mid]<arr[high]) high=mid-1;
        if(arr[mid]>arr[high]) low=mid+1;
    }
    // searching target left side of pivot
    int idx=-1;
    if(target>=arr[0] && target<=arr[pivot-1]){
        low=0;
        high=pivot-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                idx=mid;
                break;
            }
            if(arr[mid]>target) high=mid-1;
            if(arr[mid]<target) low=mid+1;
        }
    }
    // searching target right side of pivot
    if(target>=arr[pivot] && target<=arr[n-1]){
        low=pivot;
        high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                idx=mid;
                break;
            }
            if(arr[mid]>target) high=mid-1;
            if(arr[mid]<target) low=mid+1;
        }  
    }
    cout<<idx;   // printing index
}