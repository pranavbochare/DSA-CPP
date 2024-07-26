// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n-1;i++){      // tc = O(n)
//         if(n%i==0){
//             sum+=i;
//         }
//     }
//     if(sum==n) cout<<"true";
//     else cout<<"false";
// }


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int sum=0;
    for(int i=1;i<sqrt(n);i++){       // tc = O(rootn)
        if(n%i==0) sum+=i;
    }
    for(int i=sqrt(n);i>=1;i--){       // for correct order
        if(n%i==0) sum+=(n/i);
    }
    sum-=n;
    if(sum==n) cout<<"true";
    else cout<<"false";
}