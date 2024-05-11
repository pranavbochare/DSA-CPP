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
    int x;
    cout<<"enter a number you want to search : ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}