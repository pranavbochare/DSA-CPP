// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][2]={1,2,3,4};
//     int brr[2][2]={5,6,7,8};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]+brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



//with extra array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3]={1,2,3,4,0,5};
//     int brr[2][3]={5,6,7,8,1,2};
//     int res[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             res[i][j]=arr[i][j]+brr[i][j];
//         }
//     }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={1,2,3,4,0,5};
    int brr[2][3]={5,6,7,8,1,2};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            brr[i][j]+=arr[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}