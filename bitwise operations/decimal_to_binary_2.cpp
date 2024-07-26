// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     string ans;
//     while(n>0){
//         if(n%2==0){   // even last bit=0
//             ans="0"+ans;
//         }
//         else{     // odd last bit=1
//             ans="1"+ans;
//         }
//         n=n/2;
//     }
//     cout<<ans;
// }


#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    string ans;
    while(n>0){
        if(n%2==0){   // even last bit=0
            ans="0"+ans;
        }
        else{     // odd last bit=1
            ans="1"+ans;
        }
        n=n>>1;             // right shift
    }
    cout<<ans;
}