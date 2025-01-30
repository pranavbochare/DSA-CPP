#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> &parent,int x){ // return in which groups x belongs
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}
bool unoin(vector<int>& parent,vector<int>&rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);

    if(a==b) return true;

    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[a]++;
        parent[a]=b;
    }
    return false;
}
int main(){
    int n,m;                 // n-> no of elements , m-> no of queries
    cin>>n>>m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }

    while(m--){
        int a,b;
        cin>>a>>b;
        bool ans=unoin(parent,rank,a,b);
        if(ans==true) cout<<"cycle detected";
    }
}