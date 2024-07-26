// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int temp;
//     while(n!=0){
//         temp=n;
//         n=n & (n-1);
//     }
//     cout<<temp;
// }

// max power of two just greater than n is the above answer multiply by two



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    n=n | (n>>1);
    n=n | (n>>2);
    n=n | (n>>4);
    n=n | (n>>8);
    n=n | (n>>16);

    int ans=(n+1)>>1;     // means (n+1)/2
    cout<<ans;
}