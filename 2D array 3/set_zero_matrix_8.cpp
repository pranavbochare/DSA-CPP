// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4]={0,1,2,0,5,6,7,8,9,3,5,4};
//     int copy[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             copy[i][j]=arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(copy[i][j]==0){
//                 for(int c=0;c<4;c++){  // row setting zero
//                     arr[i][c]=0;
//                 }
//                 for(int r=0;r<3;r++){
//                     arr[r][j]=0;
//                 }
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={0,1,2,0,5,6,7,8,9,3,5,4};
    int row[3];
    int col[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==0){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(row[i]==true){
            for(int j=0;j<4;j++){
                arr[i][j]=0;
            }
        }
    }
    for(int j=0;j<4;j++){
        if(col[j]==true){
            for(int i=0;i<3;i++){
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


