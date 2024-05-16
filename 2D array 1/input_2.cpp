#include<iostream>
using namespace std;
int main()
{
    int m;                    //m=rows
    cout<<"enter rows : ";
    cin>>m;
    int n;                    //n=column
    cout<<"enter column : ";
    cin>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){         // i for rows loop
        for(int j=0;j<n;j++){     // j for column loop
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}