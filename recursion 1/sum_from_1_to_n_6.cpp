// extra parameter

// #include<iostream>
// using namespace std;
// void summation(int sum,int n){
//     if(n==0){
//         cout<<sum;
//         return;
//     }
//     summation(sum+n,n-1);
// }
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     summation(0,n);
// }


#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<sum(n);
}