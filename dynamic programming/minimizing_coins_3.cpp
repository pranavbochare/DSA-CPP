#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> coins;
vector<int> dp(100006,-2);
int f(int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];
    int ans=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0) continue;
        ans=min(ans,f(x-coins[i]));
    }
    if(ans==INT_MAX) return ans=INT_MAX;
    return dp[x]=1+ans;
}

int main()
{
    int n;
    cin>>n;  // n=size of coins array 
    int x;   // x is sum
    cin>>x;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        coins.push_back(num);
    }
    int ans=f(x);
    if(ans==INT_MAX) cout<<"-1"<<endl;
    else cout<<ans<<endl;

}