#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> pt){
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
int main()
{
    stack< int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    stack <int> gt;         // elements st to gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }

    stack <int> rt;          // elements gt to rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }

    while(rt.size()>0){       // elements rt to st
        st.push(rt.top());
        rt.pop();
    }
    print(st);
}