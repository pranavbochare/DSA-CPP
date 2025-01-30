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
node* deleteNode(node* head,int tarval){
    if(tarval==head->val){
        head=head->next;
        return head;
    }
    node* temp=head;
    while(temp->next->val!=tarval){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    node* head=a;
    display(head);
    head=deleteNode(head,30);
    display(head);
}