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
class DLL{
public:
    node* head;
    node* tail;
    int size=0;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<=size/2){
                node* temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                return temp->val;
            }
            else{
                node* temp=tail;
                for(int i=1;i>=(size-idx);i++){
                    temp=temp->prev;
                }
                return temp->val;
            }
        }
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.insertAtTail(60);
    list.display();
    cout<<list.getAtIdx(0)<<endl;
    cout<<list.getAtIdx(5)<<endl;
    cout<<list.getAtIdx(3)<<endl;
    cout<<list.getAtIdx(2)<<endl;
}
