#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int k=2;
    int n=q.size();
    stack<int> st;
    for(int i=1;i<=k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    for(int i=1;i<=k;i++){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    for(int i=1;i<=n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
    display(q);
}