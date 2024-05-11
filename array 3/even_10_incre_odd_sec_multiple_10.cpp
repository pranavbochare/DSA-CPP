#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,6,3,5,2,8,9,2,7};
    for(int i=0;i<10;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
        cout<<arr[i]<<" ";
    }
}