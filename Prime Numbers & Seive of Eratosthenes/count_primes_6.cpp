#include<iostream>
using namespace std;
int isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<n;i++){            // O(rootn)
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){            // O(n)
        if(isPrime(i)) count++;
    }
    cout<<count;                   // overall O(n*rootn)
}