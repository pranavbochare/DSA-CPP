#include<bits/stdc++.h>
using namespace std;
int ans;

bool canWeGo(vector<vector<int>> grid,int i,int j,int n){
    if(i>=0 && j>=0 && i<n && j<n && grid[i][j]==0) return true;
    else return false;
}

void f(vector<vector<int>> grid,int i,int j,int n){
    if(i==n-1 && j==n-1){
        ans+=1;
        return;
    }

    grid[i][j]=2;         // mark visited

    if(canWeGo(grid,i,j-1,n)){   // left
        f(grid,i,j-1,n);
    }

    if(canWeGo(grid,i,j+1,n)){   // right
        f(grid,i,j+1,n);
    }

    if(canWeGo(grid,i+1,j,n)){   // up
        f(grid,i+1,j,n);
    }

    if(canWeGo(grid,i-1,j,n)){   // down
        f(grid,i-1,j,n);
    }
    grid[i][j]=0;
}

int ratInMaze(vector<vector<int>> &grid,int n){
    ans=0;
    f(grid,0,0,n);
    return ans;
}
int main()
{
    vector<vector<int>> grid={
        {0,0,1,0},
        {1,0,0,0},
        {1,0,0,0},
        {1,1,1,0}
    };
    cout<<ratInMaze(grid,4);
}