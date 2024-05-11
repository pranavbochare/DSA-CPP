#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,0,8,0,9,5,0};
    int i=0;
    int j=6;
    while(i<j){
        if(arr[i]!=0) i++;
        else if(arr[j]==0) j--;
        else{
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}