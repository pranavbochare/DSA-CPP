// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={2,-3,4,4,-7,-1,4,-2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     vector <int> v;
//     for(int i=0;i<n-2;i++){            // tc=O(k*n)
//         for(int j=i;j<k+i;j++){
//             if(arr[j]<0){
//                 v.push_back(arr[j]);
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int ans[n-k+1];
    int p=-1;                  // negative of first window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=1;
    else ans[0]=arr[p];
    int i=1;
    int j=k;
    while(j<n){              // O(n)
        if(p>=i) ans[i]=arr[p];
        else{
            p=-1;
            for(int x=i;x<=j;x++){
                if(arr[x]<0){
                    p=x;
                    break;
                }
            }
            if(p==-1) ans[i]=1;
            else ans[i]=arr[p];
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    } 
}