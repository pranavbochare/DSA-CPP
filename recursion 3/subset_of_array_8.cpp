#include<iostream>
#include<vector>
using namespace std;
void arraySubset(vector <int> ans,int original[],int n,int idx){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    int ele=original[idx];
    arraySubset(ans,original,n,idx+1);
    ans.push_back(ele);
    arraySubset(ans,original,n,idx+1);
}
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    arraySubset(v,arr,n,0);
}