#include<iostream>
#include<climits>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[105][105][2];
int f(int n,int k,int last){
    if(n==0) return 0;
    if(n==1){
        if(k==0) return 1;
        else return 0;
    }
    if(dp[n][k][last]!=-1) return dp[n][k][last];
    if(last==1){
        return dp[n][k][last]=f(n-1,k-1,1)+f(n-1,k,0);
    }
    else{
        return dp[n][k][last]=f(n-1,k,0)+f(n-1,k,0);
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    cout<<f(n,k,0)+f(n,k,1);
}
// some problem occuring but program was correct