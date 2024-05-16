// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={4,2,7,9,8};      
//     int n=5;
//     int brr[5];
//     for(int i=0;i<n;i++){
//         brr[i]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0;i<n-1;i++){              // n-1 passes are also work
//         for(int j=0;j<n-1-i;j++){           // but n-1-i passes reduce operations
//             if(brr[j]>brr[j+1]){          // condition check
//                 swap(brr[j],brr[j+1]);    // swap
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;
//     bool flag=true;
//     for(int i=0;i<n;i++){
//         if(i==0){
//             if(arr[i]!=brr[i] && arr[i]!=brr[i+1]){
//                 flag=false;
//                 break;
//             }
//         }
//         else if(i==n-1){
//             if(arr[i]!=brr[i] && arr[i]!=brr[i-1]){
//                 flag=false;
//                 break;
//             }
//         }
//         else{
//             if(arr[i]!=brr[i] && arr[i]!=brr[i+1] && arr[i]!=brr[i-1]){
//                 flag=false;
//                 break;
//             }
//         }
//     }
//     if(flag==true) cout<<"almost sorted";
//     else cout<<"not almost sorted";
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={4,2,7,9,8};
//     int n=5;
//     bool flag=true;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]<arr[j]){
//                 count++;
//             }
//         }
//         int aidx=n-count-1;
//         int diff=aidx-i;
//         if(diff<0) diff=-diff;
//         if(diff>1){
//             flag=false;
//         }
//     }
//     if(flag==true) cout<<"almost sorted";
//     else cout<<"not almost sorted";
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,7,9,8};
    int n=5;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"almost sorted";
    else cout<<"not almost sorted";
}