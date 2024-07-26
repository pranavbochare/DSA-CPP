#include<iostream>
#include<climits>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int arr[]={2,3,7,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    v[0]=2*arr[0];
    int mx=0;
    for(int i=1;i<n;i++){
        mx=max(mx,arr[i]);       // 4 6 14 12 20 
        v[i]=arr[i]+mx;
    }
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
}