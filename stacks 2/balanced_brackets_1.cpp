#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isBalanced(string str){
    int n=str.size();
    if(n%2!=0) return false;
    stack <char> st;
    for(int i=0;i<n;i++){
        if(str[i]=='('){
            st.push(str[i]);
        }
        else{      // closing bracket
            if(st.top()=='('){
                st.pop();
            }
            else return false;
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main()
{
    string s="())()(";
    cout<<isBalanced(s);
}