//positive element
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"enter size of an array : ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     bool flag=false;
//     for(int i=0;i<size;i++){
//         if(arr[i]!=i+1){
//             flag=true;
//             cout<<i+1;
//             break;
//         }
//     }
//     if(flag==false){
//         cout<<"no missing element";
//     }
// }

//for all type of number 
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of an array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int x=1;
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i]<=0) continue;
        if(arr[i]!=x){
            cout<<x;
            flag=true;
            break;
        }
        else x++;
    }
    if(flag==false){
        cout<<"no missing element";
    }
}