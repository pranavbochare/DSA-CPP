#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
int minimumProductSubset(vector<int> &arr){
    int cz=0;
    int cp=0;
    int cn=0;
    int prod_pos=1;
    int prod_neg=1;
    int largest_neg=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) cz++;
        if(arr[i]<0){
            cn++;
            prod_neg*=arr[i];
            largest_neg=max(largest_neg,arr[i]);
        }
        if(arr[i]>0){
            cp++;
            prod_pos*=arr[i];
        }
    }
    if(cn==0){    // no negative 
        if(cz==0){      // no zero
            int mn=INT_MAX;
            for(int i=0;i<arr.size();i++){
                mn=min(mn,arr[i]);
            }
            return mn;
        }
        else return 0;   // zero present
    }
    else{     // negative present
        if(cn%2!=0){     // odd negative
            return prod_neg*prod_pos;
        }
        else{
            return (prod_neg/largest_neg)*prod_pos;
        }
    }
}
int main()
{
    vector<int> arr{5,2,8,-1};
    cout<<minimumProductSubset(arr);
    return 0;
}