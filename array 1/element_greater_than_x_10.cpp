#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element number "<<i+1<<" : ";
        cin>>arr[i];
    }
    int x;
    cout<<"enter number you have going to compare : ";
    cin>>x;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"number of element greater than "<<x<<" : "<<count;
}