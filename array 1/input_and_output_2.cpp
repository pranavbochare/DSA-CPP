#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<=6;i++){
        cout<<"enter element number "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}