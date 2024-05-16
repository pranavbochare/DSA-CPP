#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[4][3]={1,2,6,4,5,6,1,8,9,5,4,0};
    
    int maxsum=INT_MIN;
    int idx=-1;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            idx=i;
        }
    }
    cout<<maxsum<<endl;
    cout<<idx;
}