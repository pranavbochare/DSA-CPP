#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,6,3,5,2,8,9,2,7};
    int SumEven=0;
    int SumOdd=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
            SumEven+=arr[i];
        }
        else{
            SumOdd+=arr[i];
        }
    }
    int diff=SumEven-SumOdd;
    cout<<abs(diff);
}