#include<iostream>
using namespace std;
int main()
{
    int arr[5]={13,22,34,4,5};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}


// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[5]={13,22,34,4,5};
//     int max=INT16_MIN;
//     for(int i=1;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }