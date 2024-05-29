#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=13;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int k=low+(high-low)/2;     // k = mid
        int m=k*(k+1)/2;
        if(m==n){
            flag=true;
            cout<<k;
            break;
        }
        if(m<n) low=k+1;
        if(m>n) high=k-1;
    }
    if(flag==false) cout<<high;
}