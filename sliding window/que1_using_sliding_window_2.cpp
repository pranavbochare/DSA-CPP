#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=-1;
    // calculating previous sum
    int preSum=0;
    for(int i=0;i<k;i++){      // tno = k
        preSum+=arr[i];
    }
    // using sliding window
    int i=1;
    int j=k; 
    while(j<n){      // tno = n-k
        int currSum=preSum+arr[j]-arr[i-1];
        if(currSum>maxSum){
            maxSum=currSum;
            maxIdx=i;
        }
        preSum=currSum;
        i++;
        j++;
    } 
    // tc = O(n)
    cout<<maxSum<<endl;
    cout<<maxIdx;
}