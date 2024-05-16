#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,2,4,1,3};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){            // n-1 passes are also work
        bool flag=true;           
        for(int j=0;j<n-1-i;j++){           // but n-1-i passes reduce operations
            if(arr[j]>arr[j+1]){          // condition check
                swap(arr[j],arr[j+1]);      // swap
                flag=false;   
            }
        }
        if(flag==true){          // swap did not happen
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}