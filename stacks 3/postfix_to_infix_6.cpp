#include<iostream>
#include<string>
#include<stack>
using namespace std;
string solve(string val1,string val2,char ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int main()
{
    string str="79+4*8/3-";
    stack <string> val;
    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i]<=57){
            val.push(to_string(str[i]-48));
        }
        else{    // it is a operator
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}