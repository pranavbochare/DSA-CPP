// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     bool flag=true;
    
//     for(int i=2;i<n;i++){      tc = O(n)
//         if(n%i==0){
//             flag=false;
//             break;
//         }
//     }
//     if(n==1) cout<<"neither prime nor composite";
//     else if(flag==false) cout<<"no";
//     else cout<<"yess";
// }


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    bool flag=true;
    
    for(int i=2;i<=sqrt(n);i++){           // tc = O(n)
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(flag==false) cout<<"no";
    else cout<<"yess";
}