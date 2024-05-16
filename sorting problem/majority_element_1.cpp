// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[7]={1,2,2,1,2,1,2};
//     int n=7;
//     int idx;
//     for(int i=0;i<n;i++){
//         int count=1;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]) count++;
//         }
//         if(count>(n/2)){
//             idx=i;
//         }       
//     }
//     cout<<arr[idx];
// }


#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int arr[7]={1,2,2,1,2,1,2};
    int n=7;
    // sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<arr[n/2];
    
}

