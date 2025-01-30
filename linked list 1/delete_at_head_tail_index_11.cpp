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

    void insertAtEnd(int val){
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    } 

    void insertAt(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index";
        }
        else if(idx==0) insertAtbeginning(val);
        else if(idx==size) insertAtEnd(val);
        else{
            node* t=new node(val);
            node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size) return -1;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"Invalid Index";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        if(size<=0){
            cout<<"Invalid index";
            return;
        }
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
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
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtbeginning(20);
    ll.insertAtEnd(30);
    ll.insertAtbeginning(30);
    ll.insertAtbeginning(40);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();        // 40 30 20 10 20 30 40 50 
    ll.insertAt(3,100);
    ll.display(); 
    ll.deleteAtHead();
    ll.display(); 
    ll.deleteAtTail();
    ll.display(); 
    ll.deleteAtIdx(3);
    ll.display(); 
}