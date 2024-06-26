#include<iostream>
#include<vector>
#include<string>
using namespace std;
void parenthesis(string str,int ob,int cb,int n){
    if(cb==n){
        cout<<str<<endl;
        return;
    }
    if(ob<n) parenthesis(str+'(',ob+1,cb,n);
    if(ob>cb) parenthesis(str+')',ob,cb+1,n);
}
int main()
{
    int n=3;
    parenthesis("",0,0,n);

}