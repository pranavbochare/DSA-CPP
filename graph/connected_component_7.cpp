#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
unordered_set<int> visited;
vector<list<int>> graph;
int v;
void addEdge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir==true){
        graph[dest].push_back(src);
    }
}

void dfs(int node,unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbor : graph[node]){
        if(not visited.count(neighbor)){
            dfs(neighbor,visited);
        }
    }
}

int connected_components(){
    int ans=0;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(visited.count(i)==0){
            ans++;
            dfs(i,visited);
        }
    }
    return ans;
}

int main()
{
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        addEdge(s,d);    // for directional graph addEdge(s,d,false);
    }
    cout<<connected_components()<<endl;
}