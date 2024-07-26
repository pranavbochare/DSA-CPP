#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,1,4,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    int count=0;
    int sum=0;
    int score;
    int i=0;
    int j=0;
    while(j<n){
        sum+=arr[j];
        score=sum*(j-i+1);
        while(score>=k){
            sum-=arr[i];
            i++;
            score=sum*(j-i+1);
        }
        count+=(j-i+1);
        j++;
    }
    cout<<count;
}