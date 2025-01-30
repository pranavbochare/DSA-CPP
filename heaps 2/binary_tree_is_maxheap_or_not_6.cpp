#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
    }
};
int sizeOfTree(node* root){
    if(root==NULL) return 0;
    return 1+sizeOfTree(root->left)+sizeOfTree(root->right);
}
bool isCBT(node* root){
    int size=sizeOfTree(root);
    int count=0;
    queue<node*> q;
    q.push(root);
    while(count<size){
        node* temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }   
    }
    while(q.size()>0){
        node* temp=q.front();
        q.pop();
        if(temp!=NULL) return false;
    }
    return true;
}
bool isMax(node* root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val<root->left->val) return false;
    if(root->right!=NULL && root->val<root->right->val) return false;
    return isMax(root->left) && isMax(root->right);
}
int main()
{
    node* a = new node(20);
    node* b = new node(15);
    node* c = new node(10);
    node* d = new node(8);
    node* e = new node(11);
    node* f = NULL;
    node* g = new node(6);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<isMax(a)<<endl;
    cout<<isCBT(a)<<endl;
    if(isMax(a) && isCBT(a)) cout<<"tree is max heap";
    else cout<<"tree is not max heap";
}