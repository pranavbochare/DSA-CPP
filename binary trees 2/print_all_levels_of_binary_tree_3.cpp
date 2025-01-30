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
int levels(node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthLevel(node* root,int currLevel,int level){    
    if(root==NULL) return;   
    if(currLevel==level){
        cout<<root->val<<" ";          
        return;                   // optimized
    }  
    nthLevel(root->left,currLevel+1,level);     
    nthLevel(root->right,currLevel+1,level);    
}
void displayAllLevels(node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}
int main()             // level order traversal
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
    displayAllLevels(a);
}