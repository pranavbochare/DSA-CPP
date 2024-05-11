#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of an array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element number "<<i+1<<" : ";
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    cout<<product;
}