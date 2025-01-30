#include<iostream>
#include<string>
#include<stack>
using namespace std;
string solve(string val1,string val2,char ch){
    string s="";
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int main()
{
    string str="-/*+79483";
    stack <string> val;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57){
            val.push(to_string(str[i]-48));
        }
        else{    // it is a operator
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}