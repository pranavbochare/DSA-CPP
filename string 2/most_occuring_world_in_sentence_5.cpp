#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector <string> v;
    
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end()); 

    int count=0;
    int maxcount=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]) count++;
        else count=1;
        maxcount=max(count,maxcount);
    }
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }

}