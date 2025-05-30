#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
    vector<vector<int>> dp;
int f(int i,int j,vector<int>& arr){
    if(i==j || i+1==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=INT_MAX;
    for(int k=i+1;k<=j-1;k++){
        ans=min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[k]*arr[j]);
    }
    return dp[i][j]=ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    dp.clear();
    dp.resize(1000,vector<int>(1000,-1));

    // for(int len=3;len<=n;len++){            bottom up solution  
    //     for(int i=0;i+len-1<n;i++){         dp.resize() me -1 li place pe 0 karna
    //         int j=i+len-1;
    //         dp[i][j]=INT_MAX;
    //         for(int k=i+1;k<=j-1;k++){
    //             dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+v[i]*v[k]*v[j]);
    //         }
    //     }
    // }
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<f(0,n-1,v);
}


// 5                       input
// 40 20 30 10 30
// 26000                   output