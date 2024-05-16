#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string : \n";
    getline(cin,str);
    int s=stoi(str);   // string to integer function
    cout<<s<<endl;
    int x=0;
    for(int i=0;i<str.size();i++){    // without function
        x*=10;
        x+=str[i]-48;    
    }
    cout<<x;
}