#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,5,9,1,2,5};
    for(int i=0;i<7;i++){
        bool flag=true;
        for(int j=0;j<7;j++){
            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i];
            break;
        }
    }  
}