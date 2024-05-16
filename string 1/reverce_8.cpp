// reverce all string
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string str="abcdef";
//     reverse(str.begin(),str.end());
//     cout<<str;
// }


//reverce string from specific points
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="abcdefgh";
    cout<<str<<endl;
    reverse(str.begin()+2,str.end()-1);
    cout<<str;
}