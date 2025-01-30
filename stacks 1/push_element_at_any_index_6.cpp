#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& pt){
    stack <int> temp;
    while(pt.size()>0){
        temp.push(pt.top());
        pt.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        pt.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void pushAtIdx(stack<int>& st,int idx,int val){
    stack<int> pt;
    while(st.size()>idx){
        pt.push(st.top());
        st.pop();
    }
    st.push(val);
    while(pt.size()>0){
        st.push(pt.top());
        pt.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtIdx(st,2,100);
    print(st);
}