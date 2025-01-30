#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
void permutations(string &str,int i){
    if(i==str.size()-1){
        cout<<str<<endl;
        return;
    }
    unordered_set<char> s;
    for(int idx=i;idx<str.size();idx++){
        if(s.count(str[idx])) continue;  // already set me hai to continue
        s.insert(str[idx]);   // otherwise insert in set

        swap(str[idx],str[i]);
        permutations(str,i+1);
        swap(str[idx],str[i]);   // backtracking step
    }
}
int main()
{
    string str="aba";
    permutations(str,0);
}