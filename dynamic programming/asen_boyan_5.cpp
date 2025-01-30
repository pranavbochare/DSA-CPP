#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k,l,m;
    cin>>l>>k>>m;
    vector<bool> dp(1000005,0);
    dp[1]=1;
    dp[k]=1;
    dp[l]=1;
    for(int i=2;i<=1000005;i++){
        if(i==k || i==l) continue;
        dp[i]=!(dp[i-1] && ((i-k>=1) ? dp[i-k] : 1) && ((i-l>=1) ? dp[i-l] : 1));
    }
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        if(dp[n]==1){ // winning state
            cout<<"A";
        }
        else{   // loosing state
            cout<<"B";
        }
    }
}


// 2 3 5    test case and answer
// 1 12 113 25714 88888
// ABAAB