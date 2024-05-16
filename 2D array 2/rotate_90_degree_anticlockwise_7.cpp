// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<endl;

//     for(int j=2;j>=0;j--){
//         for(int i=0;i<3;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // outer loop column
    for(int k=0;k<3;k++){ 
        int i=0;
        int j=2;   // swap i k and j k
        while(i<=j){
            int temp=arr[i][k];
            arr[i][k]=arr[j][k];
            arr[j][k]=temp;
            i++;
            j--;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}