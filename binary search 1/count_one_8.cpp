// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={0,0,0,0,1,1};
//     int n=6;
//     int low=0;
//     int high=n-1;
//     int zidx=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==0){
//             low=mid+1;
//             zidx=mid;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<n-1-zidx;
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,0,0,1,1};
    int n=6;
    int x=1;

    int low=0;
    int high=n-1;

    int firstidx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(mid==0){
                firstidx=mid;
                break;
            }
            else if(arr[mid-1]!=x){
                firstidx=mid;
                break;
            }
            else if(arr[mid-1]==x){
                high=mid-1;
            }
        }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(firstidx==-1) cout<<0;   // koi one present nahi hai
    else cout<<n-firstidx;
}


