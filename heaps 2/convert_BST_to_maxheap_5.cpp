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
void inorder(node* root,vector<int>& v){
    if(root==NULL) return;
    inorder(root->right,v);
    v.push_back(root->val);
    inorder(root->left,v);
}
void preorder(node* root,vector<int>& v,int &i){
    if(root==NULL) return;
    root->val=v[i++];
    preorder(root->left,v,i);
    preorder(root->right,v,i);
}
void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
int main()
{
    node* a = new node(10);
    node* b = new node(5);
    node* c = new node(16);
    node* d = new node(1);
    node* e = new node(8);
    node* f = new node(12);
    node* g = new node(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    vector<int> ans;
    inorder(a,ans);                // decresing array generation
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    levelOrder(a);
    cout<<endl;
    int i=0;
    preorder(a,ans,i);      // changes max heap generated
    levelOrder(a);
    cout<<endl;
}