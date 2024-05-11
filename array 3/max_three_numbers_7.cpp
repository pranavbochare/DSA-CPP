#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6]={111,32,3,4,76,37};
    int max=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<6;i++){
        if((arr[i]!=max) && (arr[i]>smax)) smax=arr[i];
    }
    int tmax=INT_MIN;
    for(int i=0;i<6;i++){
        if((arr[i]>tmax) && (arr[i]!=max) && (arr[i]!=smax)) tmax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax<<endl;
    cout<<tmax<<endl;

}

