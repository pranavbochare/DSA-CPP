#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={13,22,34,4,5};
    int max=INT16_MIN;
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum element : "<<max<<endl;
    int smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]!=max && arr[i]>smax){
            smax=arr[i];
        }
    }
    cout<<"second maximum element : "<<smax;
}