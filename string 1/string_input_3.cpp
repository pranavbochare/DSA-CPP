// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;  // works only if string has no spaces
//     cout<<s;
// }


#include<iostream>
using namespace std;
int main()
{
    string str;        
    getline(cin,str);  // works with or without spaces 
    cout<<str;
}