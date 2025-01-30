// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// int main()
// {
//     string str="aaabbcddaabffg";
//     int n=str.size();
//     stack <char> st;
//     st.push(str[0]);
//     string s;
//     for(int i=0;i<n;i++){
//         if(st.top()==str[i]){
//             st.pop();
//             st.push(str[i]);
//         }
//         else{
//             s+=(st.top());
//             st.pop();
//             st.push(str[i]);
//         }
//     }
//     s+=st.top();
//     cout<<s;
// }

#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
    string str="aaabbcddaabffg";
    int n=str.size();
    stack <char> st;
    string s;
    st.push(str[0]);
    for(int i=0;i<n;i++){
        if(st.top()!=str[i]) st.push(str[i]);
    }
    while(st.size()!=0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    cout<<s;
}