#include<bits/stdc++.h>
using namespace std;
void permutations(string input,string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.length();i++){
        char ch=input[i];
        string left=input.substr(0,i);
        string right=input.substr(i+1);
        string rem=left+right;
        permutations(rem,output+ch);
    }
}
int main()
{
    permutations("abc","");
}