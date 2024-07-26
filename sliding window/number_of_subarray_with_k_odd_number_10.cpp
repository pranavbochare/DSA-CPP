#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int oddCount=0;
    int preCount=0;
    int ans=0;
    int i=0;
    int j=0;
    while(j<n){
        if(arr[j]%2!=0){
            preCount=0;
            oddCount++;
        }
        while(oddCount==k){
            preCount++;
            if(arr[i]%2!=0){
                oddCount--;
            }
            i++;
        }
        ans+=preCount;
        j++;
        
    }
    cout<<ans;
}