#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter rows : ";
    cin>>m;
    int n;
    cout<<"enter column : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
    bool flag=false;
    int i=0;
    int j=n-1;
    while(i<=m-1 && j>=0){
        if(arr[i][j]==target){
            flag=true;
            cout<<"true";
            break;
        }
        else if(arr[i][j]>target) j--;       // go left
        else i++;                            // go down
    }
    if(flag==false) cout<<"false";
}