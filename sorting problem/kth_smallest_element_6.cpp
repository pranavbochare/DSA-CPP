#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={2,3,5,7,8,1,9};
    int n=7;
    int k=3;
    for(int i=0;i<k;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];
}