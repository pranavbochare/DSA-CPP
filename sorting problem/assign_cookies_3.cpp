#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int greed[4]={16,15,14,7};
    int n=4;
    int cookie[10]={5,6,7,8,9,15,14,13,10,16};
    int m=10;
    // sort
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && greed[j]<greed[j-1]){
            swap(greed[j],greed[j-1]);
            j--;
        }
    }
    for(int i=0;i<m;i++){
        int j=i;
        while(j>=1 && cookie[j]<cookie[j-1]){
            swap(cookie[j],cookie[j-1]);
            j--;
        }
    }
    int i=0;
    int j=0;
    int count=0;
    while(i<=n-1 && j<=m-1){
        if(cookie[j]>=greed[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<count;
}
