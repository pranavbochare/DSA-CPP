#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={10,1,2,20,5,8};
    int n=sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int a=0;
    while(pq.size()>0){
        arr[a++]=pq.top();
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}