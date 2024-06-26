#include<iostream>
#include<vector>
using namespace std;
void removeOne(vector <int> &v,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return;
    }
    int firstEle=arr[idx];
    if(firstEle==1) removeOne(v,arr,n,idx+1);
    else{
        v.push_back(firstEle);
        removeOne(v,arr,n,idx+1);
    }
}
int main()
{
    int arr[]={1,4,2,1,3,13,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    removeOne(v,arr,n,0);
}