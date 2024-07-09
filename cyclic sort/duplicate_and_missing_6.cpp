#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        if(arr[i]==arr[correctIdx]) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            v.push_back(arr[i]);
            v.push_back(i+1);
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}