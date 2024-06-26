#include<iostream>
using namespace std;
int kthGrammer(int n,int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevAns = kthGrammer(n-1,k/2);
        if(k==0) return 1;
        else return 0;
    }
    else{
        int prevAns = kthGrammer(n-1,k/2+1);
        return prevAns;
    }
}
int main()
{
    cout<<kthGrammer(4,6);  // 4th row and 6th element

}