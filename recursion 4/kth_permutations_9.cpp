// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void permutation(vector <string>& v,string ans,string original){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     for(int i=0;i<original.size();i++){
//         char ch=original[i];
//         string left=original.substr(0,i);
//         string right=original.substr(i+1);
//         permutation(v,ans+ch,left+right);
//     }

// }
// int main()
// {
//     string str="123";
//     vector <string> v;
//     permutation(v,"",str);
//     int n=4;  // 4th number ka permutation
//     cout<<v[n-1];
// }


#include<iostream>
#include<string>
using namespace std;
string helper(string str,string ans,int k){
    int n=str.size();
    if(n==0){
        ans+=str;
        return ans;
    }
    int fact=1;
    for(int i=2;i<n;i++){
        fact*=i;
    }
    int idx=k/fact;
    if(k%fact==0) idx--;
    char ch=str[idx];
    string left=str.substr(0,idx);
    string right=str.substr(idx+1);
    int q=1;
    if(k%fact==0) q=fact;
    else q=k%fact;
    return helper(left+right,ans+ch,q);
}
int main()
{
    string str="1234";
    int k=18;
    cout<<helper(str,"",k);
}

// ans 18th number permutation ahe