#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter string : \n";
    getline(cin,str);
    int size=str.size();
    int i=0;
    int j=size-1;
    bool flag=false;
    while(i<j){
        if(str[i]==str[j]){
            flag=true;
        }
        i++;
        j--;
    }
    if(flag==false){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }
}