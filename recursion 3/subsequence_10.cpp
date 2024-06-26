#include<iostream>
#include<vector>
using namespace std;
void arraySubset(vector <int> ans,int original[],int n,int idx,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
        return;
    }
    int ele=original[idx];
    if(ans.size()+(n-idx)<k) return;     // time complexicity better ho gai hai
    arraySubset(ans,original,n,idx+1,k);
    ans.push_back(ele);
    arraySubset(ans,original,n,idx+1,k);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    int k=3;
    arraySubset(v,arr,n,0,k);
}