#include<iostream>
#include<vector>
using namespace std;
int c=0;    // global variable
int inversion(vector<int> &a,vector<int> &b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k]=a[i];
            i++;
            k++;
        }
        else{
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k]=b[j];
            k++;
            j++;
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k]=a[i];
            k++;
            i++;
        }
    }
}
void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear();  // delete to reduce s c
    b.clear();
}
int main()
{
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    
    mergeSort(v);
    cout<<c;

}