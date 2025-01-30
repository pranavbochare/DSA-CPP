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
void nthLevel(node* root,int currLevel,int level){    
    if(root==NULL) return;   
    if(currLevel==level) cout<<root->val<<" ";     
    nthLevel(root->left,currLevel+1,level);     
    nthLevel(root->right,currLevel+1,level);    
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
    nthLevel(a,1,3);
}