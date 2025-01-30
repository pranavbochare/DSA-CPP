#include<iostream>
using namespace std;
class stack{
public:
    int arr[10];   // n=10
    int idx;
    stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==9){
            cout<<"stack is full !";
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack if empty !";
            return;
        }
        idx--;
    }
    int top(){   // peak
        if(idx==-1){
            cout<<"stack is empty !";
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    bool isEmpty(){
        if(idx==-1) return true;
        else return false;
    }
    bool isFull(){
        if(idx==9) return true;
        else return false;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.display();
}