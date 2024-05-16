#include<iostream>
using namespace std;
void change(int a[]){  // 1d main size nahi diya to chalta hai
    a[0]=9;
}
void change2d(int arr[3][3]){  //2d main size nahi diya to error ata hai. size=3
    arr[0][0]=100;
}
int main()
{
    int a[3]={1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<arr[0][0]<<endl;
    change2d(arr);
    cout<<arr[0][0]<<endl;
}