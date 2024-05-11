#include<iostream>
using namespace std;
void display(int brr[],int size){  // int brr[] === int* brr
    for(int i=0;i<size;i++){
        cout<<brr[i];
    }
    cout<<endl;
}
void change(int crr[],int size){   // int crr[] === int* crr
    crr[0]=9;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}