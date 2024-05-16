// for positive array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={19,12,6,23,8,9,10,11,16};
//     int n=9;
//     int x=0;
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int idx=-1;
//         for(int j=0;j<n;j++){
//             if(arr[j]<min){
//                 if(arr[j]<1) continue;
//                 min=arr[j]; 
//                 idx=j;
//             }
//         }
//         arr[idx]=x;
//         x--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<-arr[i]<<" ";
//     }
// }



// for positive negative both array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int arr[]={19,12,6,23,8,9,10,11,16};
    int n=9;
    int x=0;
    vector <int> v(9,0);
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                    minidx=j;
                }
            }
        }
        arr[minidx]=x;
        v[minidx]=1;
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}