#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,0,1,2,1,1,7,5}; // customers array
    int n=sizeof(arr)/sizeof(arr[0]);
    int grumpy[]={0,1,0,1,0,1,0,1};
    int k=3;   //  value of minutes
    int maxLoss=0;
    int maxIdx=-1;
    int preLoss=0;
    for(int i=0;i<k;i++){
        if(grumpy[i]==1){
            preLoss+=arr[i];
        }
    }
    int i=1;
    int j=k;
    while(j<n){
        int currLoss=preLoss;
        if(grumpy[j]==1) currLoss+=arr[j];
        if(grumpy[i-1]==1) currLoss-=arr[i-1];
        if(currLoss>maxLoss){
            maxLoss=currLoss;
            maxIdx=i;
        }
        preLoss=currLoss;
        i++;
        j++;
    }
    // filling 0 in grumpy array
    for(int i=maxIdx;i<maxIdx+k;i++){
        grumpy[i]=0;
    }
    // sum of satisfaction
    int sum=0;
    for(int i=0;i<n;i++){
        if(grumpy[i]==0) sum+=arr[i];
    }
    cout<<sum;
}