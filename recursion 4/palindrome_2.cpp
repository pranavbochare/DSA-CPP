// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str="abcdcba";
//     int i=0;
//     int j=str.size()-1;
//     bool flag=true;
//     while(i<=j){
//         if(str[i]!=str[j]){
//             flag=false;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if(flag==true){
//         cout<<"yess";
//     }
//     else cout<<"no";
// }



#include<iostream>
#include<string>
using namespace std;
bool palindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]) return false;
    else return palindrome(str,i+1,j-1);
}
int main()
{
    string str="racecar";
    cout<<palindrome(str,0,str.size()-1);
}