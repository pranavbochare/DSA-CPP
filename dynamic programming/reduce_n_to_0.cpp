#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> getDigit(int n){
    vector<int> res;
    while(n>0){
        if(n%10!=0){
            res.push_back(n%10);
        }
        n/=10;
    }
    return res;
}
vector<int> dp;
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int> d=getDigit(n);
    int ans=INT_MAX;
    for(int i=0;i<d.size();i++){
        ans=min(ans,f(n-d[i]));
    }
    return dp[n]=1+ans;
}
int fbu(int n){
    dp[0]=0;
    for(int i=1;i<=9;i++) dp[i]=1;

    for(int i=10;i<=n;i++){  // i=states
        vector<int> d=getDigit(i);
        int ans=INT_MAX;
        for(int j=0;j<d.size();j++){  // j digits ka loop
            ans=min(ans,dp[i-d[j]]);
        }
        dp[i]=1+ans;
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<<f(n)<<endl;
    cout<<fbu(n)<<endl;
}
