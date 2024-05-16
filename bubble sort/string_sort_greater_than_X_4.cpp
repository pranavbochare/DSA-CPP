#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str="AZYZXBDJKX";
    string s;
    for(int i=0;i<str.size();i++){
       if(str[i]>='X'){
        s+=str[i];
       }
    }
    for(int i=0;i<s.size()-1;i++){
        bool flag=true;
        for(int j=0;j<s.size()-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }  
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}