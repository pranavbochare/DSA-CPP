#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
public:
    node* head;
    node* tail;
    int s=0;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void pushBack(int val){
        node* temp=new node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }
    void pushFront(int val){
        node* temp=new node(val);
        if(s==0) head=tail=NULL;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void popFront(){
        if(s==0){
            cout<<"List if empty";
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        s--;
    }
    void popBack(){
        if(s==0){
            cout<<"List if empty";
            return;
        }
        else if(s==1){
            popFront();
            return;
        }
        node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        s--;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.display();
    dq.pushFront(30);
    dq.pushFront(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;
}