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
class linkedList{
public:
    node* head;
    node* tail;
    int size;
    linkedList(){
        head=tail=NULL;
        size=0;
    }

    void insertAtbeginning(int val){
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    linkedList ll;
    ll.insertAtbeginning(10);
    ll.display();
    ll.insertAtbeginning(20);
    ll.insertAtbeginning(30);
    ll.insertAtbeginning(40);
    ll.display();
}