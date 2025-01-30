#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtEnd(node* head,int val){
    node* t=new node(50);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;
}
int main()
{
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    insertAtEnd(a,50);
    display(a);
}

// tc = O(n)