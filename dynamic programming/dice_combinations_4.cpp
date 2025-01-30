#include<iostream>
#include<vector>
using namespace std;

vector<int> dp(100005,-1);
int f(int n){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        ans+=f(n-i);
    }
    return dp[n]=ans;
}
int fbu(int n){
    dp[0]=1;

    for(int k=1;k<=n;k++){
        int ans=0;
        for(int i=1;i<=n;i++){
            if(k-i<0) break;
            ans+=dp[k-i];
        }
        dp[k]=ans;
    }

    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    cout<<fbu(n)<<endl;
}