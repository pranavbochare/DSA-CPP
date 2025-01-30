#include<iostream>
#include<climits>
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
int minValue(node* root){
    if(root==NULL) return INT_MAX;
    int lmin=minValue(root->left);
    int rmin=minValue(root->right);
    return min(root->val,min(lmin,rmin));
}
int main(){
    node* a=new node(1); // root
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

    cout<<minValue(a);
}