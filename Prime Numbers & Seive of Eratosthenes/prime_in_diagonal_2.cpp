#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    int mx=0;
    for(int i=0;i<n;i++){                    // tc = O(n*rootn)
        if(isPrime(arr[i][i])){
            mx=max(mx,arr[i][i]);
        }
        if(isPrime(arr[i][n-i-1])){
            mx=max(mx,arr[i][n-i-1]);
        }
    }
    cout<<mx;
}