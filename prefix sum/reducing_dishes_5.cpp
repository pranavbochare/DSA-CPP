#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[]={-1,-8,0,5,-9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v(arr,arr+n);
    sort(v.begin(),v.end());    
    // suffix array
    int suf[n];
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+v[i];
    }
    // finding pivot index
    int idx=-1;
    for(int i=0;i<n;i++){
        if(suf[i]>=0){
            idx=i;
            break;
        }
    }
    // max sum
    if(idx==-1) cout<<0;          // for all -ve number {-2,-1,-5}
    else{
        int x=1;
        int maxSum=0;
        for(int i=idx;i<n;i++){
            maxSum+=(v[i]*x);
            x++;
        }
        cout<<maxSum;
    }
    
}