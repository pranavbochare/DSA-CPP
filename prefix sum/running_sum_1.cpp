// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,3,6,3,3,7,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int run[n];
//     run[0]=arr[0];
//     for(int i=1;i<n;i++){
//         run[i]=run[i-1]+arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<run[i]<<" ";        // tc=O(n)   sc=O(n)
//     }
// }


#include <iostream>
#include<climits>
using namespace std;
int main()
{
   int arr[]={1,3,2,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=1;i<n;i++){
      arr[i]=arr[i]+arr[i-1];          // tc=O(n)   sc=O(1) 
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
}