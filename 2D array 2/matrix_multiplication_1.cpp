#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter rows of first matrix : ";
    cin>>m;
    int n;
    cout<<"enter column of first matrix : ";
    cin>>n;

    int p;
    cout<<"enter rows of second matrix : ";
    cin>>p;
    int q;
    cout<<"enter column of second matrix : ";
    cin>>q;

    if(n==p){
        int a[m][n];
        cout<<"enter first matrix element : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        int b[p][q];
        cout<<"enter second matrix element : "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;    
        }
    }
    else{
        cout<<"matrix will not multiply";
    }
}