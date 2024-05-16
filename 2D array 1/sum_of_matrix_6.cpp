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

    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}