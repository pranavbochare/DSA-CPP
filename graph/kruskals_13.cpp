#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent,int x){ // return in which groups x belongs
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}

void Union(vector<int>& parent,vector<int>&rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);

    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[a]++;
        parent[a]=b;
    }
}

struct edge{
    int src;
    int des;
    int wt;
};

bool cmp(edge e1,edge e2){
    return e1.wt<e2.wt;
}

int kruskals(vector<edge> &input,int n,int e){
    sort(input.begin(),input.end(),cmp);
    vector<int> parent(n+1);
    vector<int> rank(n+1,1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    int edgeCount=0;   // n-1
    int i=0;
    int ans=0;
    while(edgeCount<n-1){
        edge curr=input[i];
        int srcPar=find(parent,curr.src);
        int desPar=find(parent,curr.des);
        if(srcPar!=desPar){       // include edge
            Union(parent,rank,srcPar,desPar);
            ans+=curr.wt;
            edgeCount++;
        }
        i++;
    }
    return ans;
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<edge> v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].src>>v[i].des>>v[i].wt;
    }
    cout<<kruskals(v,n,e);
}
