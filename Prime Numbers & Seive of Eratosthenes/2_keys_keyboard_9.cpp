#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<n;i++){            // O(rootn)
        if(n%i==0) return false;
    }
    return true;
}
int gd(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return (n/i);
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;              // how many A's you want
    int count=0;
    while(n>1){
        if(isPrime(n)){
            count+=n;
            break;
        }
        int hf=gd(n);   // highest factor
        count+=(n/hf);
        n=hf;
    }
    cout<<count;
}