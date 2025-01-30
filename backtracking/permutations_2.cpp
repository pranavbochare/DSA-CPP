#include<bits/stdc++.h>
using namespace std;
void permutations(string &str,int i){
    if(i==str.size()-1){
        cout<<str<<endl;
        return;
    }
    for(int idx=i;idx<str.size();idx++){
        swap(str[idx],str[i]);
        permutations(str,i+1);
        swap(str[idx],str[i]);   // backtracking step
    }
}
int main()
{
    string str="abc";
    permutations(str,0);
}