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
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    display(v);
    cout<<endl;

    reverce(0,2,v);

    display(v);

    
}
