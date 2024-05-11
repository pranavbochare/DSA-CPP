#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    bool flag=false;
    while(i<=j){
        if(arr[i]!=arr[j]){
            flag=true;
            break;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<"not palindrome";
    else cout<<"palindrome";
}