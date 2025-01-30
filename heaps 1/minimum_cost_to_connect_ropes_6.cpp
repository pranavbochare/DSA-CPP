#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={2,7,4,1,8};
    int n=sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int cost=0;
    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        pq.push(x+y);
        cost+=(x+y);
    }
    cout<<cost;
}