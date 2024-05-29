// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
//     int n=13;
//     int x=3;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             cout<<i;
//             break;
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
//     int n=13;
//     int x=4;
//     int low=0;
//     int high=n-1;
//     bool flag=false;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==x){
//             flag=true;
//             high=mid-1;
//         }
//         if(arr[mid]<x) low=mid+1;
//         if(arr[mid]>x) high=mid-1; 
//     }
//     if(flag==true) cout<<low;
//     else cout<<-1;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=13;
    int x=3;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
        if(arr[mid]<x) low=mid+1;
        if(arr[mid]>x) high=mid-1; 
    }
    if(flag==false) cout<<-1;
}