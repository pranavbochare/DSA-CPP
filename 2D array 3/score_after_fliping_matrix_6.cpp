#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{0,0,1,1},{1,0,1,0},{1,1,0,0}}; // sum=25
    //making first column all 1s
    for(int i=0;i<3;i++){
        if(arr[i][0]==0){
            for(int j=0;j<4;j++){
                if(arr[i][j]==0) arr[i][j]=1;
                else arr[i][j]=0;
            }
        }
    }
    //flip the columns where noz>noo
    for(int j=0;j<4;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<3;i++){
            if(arr[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<3;i++){
                if(arr[i][j]==0) arr[i][j]=1;
                else arr[i][j]=0;
            }
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        int x=1;
        for(int j=4-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;
        }
    }
    cout<<sum;  // maximum binary sum
}