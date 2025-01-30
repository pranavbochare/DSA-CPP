#include<iostream>
#include<climits>
#include<queue>
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
node* construct(int arr[],int n){
    node* root=new node(arr[0]);
    queue <node*> q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        node* temp=q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN) l=new node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new node(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
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
void leftboundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left==NULL) leftboundary(root->right);
}
void leafnode(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafnode(root->left);
    leafnode(root->right);
}
void rightboundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightboundary(root->right);
    if(root->right==NULL) rightboundary(root->left);
    cout<<root->val<<" ";
}
int main()             
{
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    node* root=construct(arr,n);
    leftboundary(root);
    cout<<endl;
    leafnode(root);
    cout<<endl;
    rightboundary(root->right);
}