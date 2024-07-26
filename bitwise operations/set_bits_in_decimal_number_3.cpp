// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int count=0;    // set bits means number of ones in binary number
//     string str;
//     while(n>0){
//         if(n%2==0){
//             str='0'+str;
//         }
//         else{
//             str='1'+str;
//             count++;
//         }
//         n=n/2;
//     }
//     cout<<count;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int count=__builtin_popcount(n);
//     cout<<count;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }
    cout<<count;
}