#include<iostream>
#include<stack>
using namespace std;
void display(stack <int>st){
    stack <int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    display(st);
    int k=3;
    stack <int> helper;
    for(int i=1;i<=k;i++){
        helper.push(st.top());
        st.pop();
    }
    helper.pop();
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
    display(st);
}