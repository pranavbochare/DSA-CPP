#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<vector<int>> dp(105,vector<int>(105,-1));
int g(vector<int> &colour,int i,int j){
    int res=0;
    for(int m=i;m<=j;m++){
        res=(res%100+colour[m]%100)%100;
    }
    return res;
}
int f(vector<int> &colour,int i,int j){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int res=INT_MAX;
    for(int k=i;k<=j-1;k++){
        res=min(res,f(colour,i,k)+f(colour,k+1,j)+g(colour,i,k)*g(colour,k+1,j));
    }
    return dp[i][j]=res;
}
int fbu(vector<int>& colour){
    vector<vector<int>> dp(105,vector<int>(105,0));
    int n=colour.size();
    for(int len=2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j=i+len-1;
            int res=INT_MAX;
            for(int k=i;k<=j-1;k++){
                res=min(res,dp[i][k]+dp[k+1][j]+g(colour,i,k)*g(colour,k+1,j));
            }
            dp[i][j]=res;
        }
    }
    return dp[0][n-1];
}
int main()
{
    int n;
    cin>>n;
    vector<int> colour;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        colour.push_back(x);
    }
    cout<<f(colour,0,colour.size()-1)<<endl;
    cout<<fbu(colour);
}


// 4               input
// 2 4 2 3
// 44           output