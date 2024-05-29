// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,3,4};
//     int n=5;
//     int rsum=n*(n+1)/2;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<n-(rsum-sum);
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,3,4};
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i];
//                 break;
//             }
//         }
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,4,5};
    int n=6;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid+1) low=mid+1;
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid];
                break;
            }
            else high=mid-1;
        }
    }
}