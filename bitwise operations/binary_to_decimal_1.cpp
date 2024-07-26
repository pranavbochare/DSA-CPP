// #include<iostream>
// #include<vector>
// #include<math.h>
// #include<string>
// using namespace std;
// int main()
// {
//     string str="1001";
//     int n=str.length();
//     int sum=0;
//     for(int i=n-1;i>=0;i--){
//         char ch=str[i];
//         int num=ch-'0';
//         sum+=(num*pow(2,(n-i-1)));
//     }
//     cout<<sum;
// }


#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
int main()
{
    string str="1001";
    int n=str.length();
    int sum=0;
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        int num=ch-'0';
        sum+=(num*1<<(n-i-1));  // 1 chya right side la zero lagtat
    }
    cout<<sum;
}