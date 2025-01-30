#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack <int> temp;
    while(st.size()>0){       // printing stack top to bottom
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    cout<<endl;

    while(temp.size()>0){       
        cout<<temp.top()<<" ";   // printing stack bottom to top
        st.push(temp.top());     // restoring the st stack 
        temp.pop();
    }

    cout<<endl;

    cout<<st.top();       // st stack is still full
}