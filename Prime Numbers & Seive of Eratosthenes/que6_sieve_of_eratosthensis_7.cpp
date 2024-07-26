#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void fillSeive(vector <bool>& seive){
    int n=seive.size()-1;
    seive[0]=0;   // 0 and 1 are not prime numbers
    seive[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
            seive[j]=0;
        }
    }
}
int countPrime(int n){
    if(n<=2) return 0;
    n=n-1;
    int count=0;
    vector<bool> seive(n+1,1);  // 1 for prime , 0 for not prime
    seive[0]=0;
    seive[1]=0;
    fillSeive(seive);
    for(int i=0;i<=n;i++){
        if(seive[i]==1) count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<countPrime(n); 
}


// tc = O(n)