#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
void fillSeive(vector<bool>& seive){
    int n=seive.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
            seive[j]=0;
        }
    }
}
int main()
{
    int arr[]={2,4,3,7,10,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // finding max number
    int mx=-1;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    // filling seive
    vector<bool> seive(mx+1,1);
    if(mx+1>0) seive[0]=0;
    if(mx+1>1) seive[0]=0;
    fillSeive(seive);
    vector<int> primes;
    for(int i=2;i<=mx;i++){
        if(seive[i]==1) primes.push_back(i);
    }
    vector<bool> taken(primes.size(),0);
    for(int i=0;i<n;i++){
        int ele=arr[i];
        for(int j=0;j<primes.size();j++){
            if(primes[j]>ele) break;
            if(ele%primes[j]==0) taken[j]=1;
        }
    }
    int count=0;
    for(int i=0;i<taken.size();i++){
        if(taken[i]==1) count++;
    }
    cout<<count;
}