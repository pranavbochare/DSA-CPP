// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={22,2,3,3,5,7};
//     int i=0;
//     int j=1;
//     bool flag=false;
//     for(int i=0,j=1;i<=5,j<=5;i++,j++){
//         if(arr[i]>arr[j]){
//             flag=true;
//             break;
//         }
//     }
//     if(flag==true) cout<<"not sorted";
//     else cout<<"sorted";
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,7,8};
    bool flag=true;
    for(int i=1;i<5;i++){
        if(arr[i-1]>arr[i]){
            flag=false;
        }
    }
    if(flag==false) cout<<"not sorted";
    else cout<<"sorted";
    
}