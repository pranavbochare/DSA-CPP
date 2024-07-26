#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,1,1,0,0,0,1,1,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int flips=0;
    int maxLen=INT_MIN;
    int len;
    int i=0;
    int j=0;
    while(j<n){
        if(arr[j]==1) j++;   
        else{                 // arr[j]==0
            if(flips<k){
                flips++;
                j++;
            }
            else{             // flips == k
                len=j-i;
                maxLen=max(maxLen,len);
                while(arr[i]==1) i++;   // i ko just uske aage wale zero
                i++;                    // se ek idx fix kardo
                j++;
            }
        }
    }
    len=j-i;                     // calculate last window length
    maxLen=max(maxLen,len);      
    cout<<maxLen;
}