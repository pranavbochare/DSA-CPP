#include<iostream>
using namespace std;
int main()
{
    string arr[]={"0123","023","0566","00678","00077","0487"};
    int max=stoi(arr[0]);
    string maxs;
    for(int i=1;i<6;i++){
        if(stoi(arr[i])>max){
            max=stoi(arr[i]);
            maxs=arr[i];
        }
    }
    cout<<maxs<<endl;
}