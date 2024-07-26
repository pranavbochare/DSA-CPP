#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;  // size of subarray
    int maxSum=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<n-k;i++){        // tno = n-k+1
        int sum=0;
        for(int j=i;j<k+i;j++){     // k times
            sum+=arr[j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxIdx=i;
        }
    }
    // tno = (n-k+1)*k
    // tc = O(k*n)
    cout<<maxSum<<endl;
    cout<<maxIdx;
}