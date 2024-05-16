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

    int max=arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}