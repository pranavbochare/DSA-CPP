#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,2,3,1};
    for(int i=0;i<5;i++){
        int j;
        for(j=0;j<5;j++){
            if((i!=j ) && (arr[i]==arr[j])) break;
            if(j==4){
            cout<<arr[i];
            break;
        }
        }
    }
}