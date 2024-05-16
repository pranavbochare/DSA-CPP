#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string str;
    cout<<"enter a sentence : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}