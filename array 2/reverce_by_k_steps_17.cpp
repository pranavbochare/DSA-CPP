#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int k=0;k<a.size();k++){
        cout<<a[k]<<" ";
    }
}
void reverce(int i,int j,vector<int>& v){
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);

    display(v);
    cout<<endl;

    int n=v.size();
    int k;
    cin>>k;
    if(k>n){
        k=k%n;
    }
    reverce(0,n-1-k,v);
    reverce(n-k,n-1,v);
    reverce(0,n-1,v);

    display(v);

    
}
