#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="yyny";
    int n=str.length();
    int pre[n+1];  // no of n before kth hour
    int suf[n+1];  // no of y after & including kth hour

    pre[0]=0;
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+((str[i]=='n') ? 1 : 0);   // {0,0,0,1,1}
    }

    suf[n]=0;
    for(int i=n-1;i>=0;i--){
        suf[i]=suf[i+1]+((str[i]=='y') ? 1 : 0);    //{3,2,1,1,0}
    }

    for(int i=0;i<n+1;i++){       // added in pre[]={3,2,1,2,1}
        pre[i]+=suf[i];
    } 

    int minPenIdx=-1;
    int minPen=n;
    for(int i=0;i<n;i++){
        if(pre[i]<minPen){     // finding min penalty & index of min penalty
            minPen=pre[i];
            minPenIdx=i;
        }
    } 
    
    cout<<minPenIdx; 
}