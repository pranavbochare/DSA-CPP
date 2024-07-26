// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={4,5,1,2};
//     int queries[]={3,10,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int m=sizeof(queries)/sizeof(queries[0]);
//     int ans[m];    // ans size should be queries jitni
//     // sort
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     // prefix sum
//     for(int i=1;i<n;i++){
//         arr[i]=arr[i]+arr[i-1];
//     }
//     for(int i=0;i<m;i++){             // this for queries
//         int queLen=0;                  // queries length
//         for(int j=0;j<n;j++){              // this loop for arr
//             if(arr[j]>queries[i]) break;    // tc O(m*n)
//             else queLen++;
//         }
//         ans[i]=queLen;
//     }

//     for(int i=0;i<m;i++){
//         cout<<ans[i]<<" ";
//     }

// }


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[]={4,5,1,2};
    int queries[]={3,10,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(queries)/sizeof(queries[0]);
    int ans[m];    // ans size should be queries jitni
    // sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // prefix sum
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<m;i++){             // this for queries
        int maxLen=0;
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;              // bs for reducing tc
            if(arr[mid]>queries[i]) hi= mid-1;
            else{
                maxLen=mid+1;
                lo=mid+1;
            }
        }
        ans[i]=maxLen;
    }

    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }

}