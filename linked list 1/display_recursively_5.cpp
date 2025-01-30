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

void displayrec(node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

void revdisplay(node* head){
    if(head==NULL) return;
    revdisplay(head->next);
    cout<<head->val<<" ";
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

    displayrec(a);
    cout<<endl;
    revdisplay(a);
}