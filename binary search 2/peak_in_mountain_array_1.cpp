// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,5,4,2,1,0};
//     int n=8;
//     bool flag=true;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[i-1]){
//             flag=false;
//         }
//         else{
//             cout<<i-1<<endl;
//             cout<<arr[i-1];
//             break;
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,5,4,2,1,0};
//     int n=8;
//     int idx=-1;
//     for(int i=1;i<n-1;i++){
//         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//            idx=i;
//            cout<<arr[i]<<endl;
//            break;
//         }
//     }
//     cout<<idx;
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,5,4,3,2,0};
    int n=7;
    int low=1;      // first and last element kabhi peak nahi hota
    int high=n-2;  
    int idx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            idx=mid;
            break;
        }
        if(arr[mid]>arr[mid+1]) high=mid-1;
        if(arr[mid]>arr[mid-1]) low=mid+1;
    } 
    cout<<idx<<endl;
    cout<<arr[idx];
}