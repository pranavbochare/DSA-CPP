#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,2,5,1};
    int count=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if((arr[i]+arr[j]+arr[k])==6) count++;
            }
        }
    }
    cout<<count;
}