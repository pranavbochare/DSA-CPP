#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> &parent,int x){ // return in which groups x belongs
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}
void unoin(vector<int>& parent,vector<int>&rank,int a,int b){
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
int main(){
    int n,m;                 // n-> no of elements , m-> no of queries
    cin>>n>>m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }

    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int a,b;
            cin>>a>>b;
            unoin(parent,rank,a,b);
        }
        else{
            int x;
            cin>>x;
            cout<<find(parent,x);
        }
    }
}


// 5           input
// 4
// union
// 2 3
// union
// 3 4
// union
// 1 3
// find
// 2
// 2            output