// #include<iostream>
// using namespace std;
// int main()
// {
//     string t="abc";
//     cout<<t<<endl;
//     string s="def";
//     cout<<s<<endl;
//     t=t+s;
//     cout<<t<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string s="abc";
//     s=s+"pqr";
//     cout<<s<<endl;
//     s=s+"123";
//     cout<<s<<endl;
// }


#include<iostream>
using namespace std;
int main()
{
    string s="abc";
    s="pqr"+s;
    cout<<s<<endl;
    s="123"+s;
    cout<<s<<endl;
}