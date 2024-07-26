// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){       // tc = O(n)
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=1;i<=sqrt(n);i++){       // tc = O(rootn)
//         if(n%i==0){
//             cout<<i<<" ";
//             if(i!=sqrt(n)) cout<<n/i<<" "; 
//         } 
//     }
// }


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<sqrt(n);i++){       // tc = O(rootn)
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){       // for correct order
        if(n%i==0) cout<<n/i<<" ";
    }
}