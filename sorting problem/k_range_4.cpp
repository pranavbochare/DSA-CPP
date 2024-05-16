#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={5,3,10};
    int n=3;
    int kmin=INT_MIN;
    int kmax=INT_MAX;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1])/2);
        }
        else{
            kmax=min(kmax,(arr[i]+arr[i+1])/2);
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else cout<<"("<<kmin<<" "<<kmax<<")";
}