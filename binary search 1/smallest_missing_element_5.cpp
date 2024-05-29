// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={0,1,2,3,4,8,9,12};
//     int n=8;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i){
//             cout<<i;
//             break;
//         }
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,4,8,11,12};
    int n=8;
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid) low=mid+1;
        if(arr[mid]!=mid){
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
}