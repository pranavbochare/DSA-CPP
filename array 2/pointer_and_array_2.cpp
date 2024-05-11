#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,6,1,7};
    int* ptr=arr;        //arr  ====   &arr[0]  are same
    cout<<ptr<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];          //arr[i] === ptr[i] === i[ptr] === i[arr]
    }
    cout<<endl;
    ptr[0]=9;
    for(int i=0;i<5;i++){
        cout<<ptr[i];
    }
    cout<<endl;
    *ptr=8;    //ptr[0]=8 === *ptr=8
    ptr++;     // pointing to second element
    *ptr=9;
    ptr--;     //pointing to first element
    for(int i=0;i<5;i++){
        cout<<*ptr;
        ptr++;
    }
}