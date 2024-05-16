#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s="egg";  // egg add are isomorphic 
    string t="add";  // foo bar are not isomorphic

    bool flag=true;

    if(s.size()!=t.size()) flag=false;

    vector <int> v(150,1000);
    for(int i=0;i<s.size();i++){
        int ascii=(int)s[i];
        if(v[ascii]==1000) v[ascii]=s[i]-t[i];
        else if(v[ascii]!=(s[i]-t[i])) flag=false;
    }

    for(int i=0;i<150;i++){
        v[i]=1000;
    }

    for(int i=0;i<s.size();i++){
        int ascii=(int)t[i];
        if(v[ascii]==1000) v[ascii]=t[i]-s[i];
        else if(v[ascii]!=(t[i]-s[i])) flag=false;
    }

    if(flag==true) cout<<"true";
    else cout<<"false";
}