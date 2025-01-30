#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(node* root){    // root left right
    if(root==NULL) return;    // base case
    cout<<root->val<<" ";     // work
    preorder(root->left);     // call 1
    preorder(root->right);    // call 2
}
void inorder(node* root){     // left root right
    if(root==NULL) return;    // base case
    inorder(root->left);      // call 1
    cout<<root->val<<" ";     // work
    inorder(root->right);     // call 2
}
void postorder(node* root){    // left root right
    if(root==NULL) return;     // base case
    postorder(root->left);     // call 1
    postorder(root->right);    // call 2
    cout<<root->val<<" ";      // work
}
int main()
{
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(6);
    node* g=new node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
}