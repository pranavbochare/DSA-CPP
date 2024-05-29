#include<iostream>
using namespace std;
int main()
{
    int square=36;
    int low=0;
    int high=square;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==square){
            cout<<mid;
            break;
        }
        if(mid*mid>square) high=mid-1;
        if(mid*mid<square) low=mid+1;
    }
}
// for inperfect sqrt print high ex : if square = 20 ans is 4