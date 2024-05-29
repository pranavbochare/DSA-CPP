#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,4,6,8,9,11,13,15};
    int n=9;
    int x=9;    // closest numbers to 9
    int k=4;    // number of elements closest to x
       
    vector <int> v(k);
    if(x<arr[0]){
        for(int i=0;i<k;i++){
            v[i]=arr[i];
        }
    }

    if(x>arr[n-1]){
        int i=n-1;
        int j=k-1;
        while(j>=0){
            v[j]=arr[i];
            j--;
            i--;
        }
    }

    // binary search

    int low=0;
    int high=n-1;
    int mid=-1;
    bool flag=false;
    int t=0;   // representing index of ans
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==x){
            flag=true;
            v[t]=arr[mid];
            t++;
            break;
        }
        if(arr[mid]>x) high=mid-1;
        if(arr[mid]<x) low=mid+1;
    }

    int lb=high;
    int ub=low;
    if(flag==true){
        lb=mid-1;
        ub=mid+1;
    }

    while(t<k && lb>=0 && ub<=n-1){
        int d1=abs(x-arr[lb]);
        int d2=abs(x-arr[ub]);
        if(d1<=d2){
            v[t]=arr[lb];
            lb--;
        }
        else{
            v[t]=arr[ub];
            ub++;
        }
        t++;
    } 

    if(lb<0){
        while(t<k){
            v[t]=arr[ub];
            ub++;
            t++;
        }
    }

    if(ub>n-1){
        while(t<k){
            v[t]=arr[lb];
            lb--;
            t++;
        }
    }

    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
}