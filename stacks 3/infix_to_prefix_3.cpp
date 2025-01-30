#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main()
{
    string str="(7+9)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i]<=57){
            val.push(to_string(str[i]-48));
        }
        else{    // it is a operator
            if(op.size()==0) op.push(str[i]);
            else if(str[i]=='(') op.push(str[i]);
            else if(op.top()=='(') op.push(str[i]);
            else if(str[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(prio(str[i])>prio(op.top())) op.push(str[i]);
            else{   // prio(str[i])>=prio(op.top())
                while(op.size()>0 && prio(str[i])<=prio(op.top())){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}