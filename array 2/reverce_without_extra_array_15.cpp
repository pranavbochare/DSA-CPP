#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int k=0;k<a.size();k++){
        cout<<a[k]<<" ";
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

    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }


    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }


    //reverce(v.begin(),v.end());
    display(v);

}
