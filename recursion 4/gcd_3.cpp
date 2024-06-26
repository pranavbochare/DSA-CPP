// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=24;
//     int b=60;
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0){
//             cout<<i;
//             break;
//         }
//     }
// }


#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main()
{
    int a;
    cout<<"enter a : ";
    cin>>a;
    int b;
    cout<<"enter b : ";
    cin>>b;
    cout<<gcd(a,b);
}