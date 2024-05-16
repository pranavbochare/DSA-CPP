#include<iostream>
using namespace std;
int main()
{
    string str="i am an pwian";
    string word="";
    string maxword="";
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            maxword=max(maxword,word);
            word="";

        }
        else{
            word+=str[i];
        }
    }
    maxword=max(maxword,word);
    cout<<maxword;
}
