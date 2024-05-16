#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter rows : ";
    cin>>m;
    int n;
    cout<<"enter columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int res[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}