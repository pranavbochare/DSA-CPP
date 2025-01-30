#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>& grid,int i,int j,int n){
    if(i>=0 && j>=0 && i<n && j<n && grid[i][j]==-1) return true;
    else return false;
}
void display(vector<vector<int>>& grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
vector<int> dx={-2,-1,-2,-1,+2,+1,+2,+1};
vector<int> dy={+1,+2,-1,-2,+1,+2,-1,-2};
void f(vector<vector<int>>& grid,int i,int j,int n,int count){
    if(count==(n*n)-1){
        grid[i][j]=count;
        display(grid,n);
        cout<<"************"<<endl<<endl;
        grid[i][j]=-1;
        return;
    }
    // go at all 8 positions
    for(int k=0;k<8;k++){
        if(isSafe(grid,i+dx[k],j+dy[k],n)){
            grid[i][j]=count;
            f(grid,i+dx[k],j+dy[k],n,count+1);
            grid[i][j]=-1;
        }
    }
}
void knightsTour(int n,int i,int j){
    vector<vector<int>> grid(n,vector<int> (n,-1));
    f(grid,i,j,n,0);
}
int main()
{
    knightsTour(5,0,0);
}