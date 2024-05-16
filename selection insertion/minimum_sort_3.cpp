#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6]={5,1,5,5,2,3};
    int n=6;
    // sort
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    // minimum number
    int min=0;
    for(int i=0;i<n;i++){
        min*=10;
        min+=arr[i];
    }
    // second minimun
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int secmin=0;
    for(int i=0;i<n;i++){
        secmin*=10;
        secmin+=arr[i];
    }
    int MinNumber=min+secmin;
    cout<<MinNumber;
}