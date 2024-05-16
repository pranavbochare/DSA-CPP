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
    cout<<"enter matrix element : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int r1,c1;
    cout<<"enter first coordinates : ";
    cin>>r1>>c1;
    int r2,c2;
    cout<<"enter second coordinates : ";
    cin>>r2>>c2;
    int sum=0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}