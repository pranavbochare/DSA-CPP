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
int maxValue(node* root){
    if(root==NULL) return INT_MIN;
    int lMax=maxValue(root->left);
    int rMax=maxValue(root->right);
    return max(root->val,max(lMax,rMax));
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

    cout<<maxValue(a);
}