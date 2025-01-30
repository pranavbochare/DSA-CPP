#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int s;
    vector <int> arr;
    Queue(int size){
        f=0;
        b=0;
        s=0;
        vector<int> v(size);   // giving v chi size to arr
        arr=v;
    }

    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"queue is empty";
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<=b-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q(5);   // q(5)  for giving size
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.pop();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
}