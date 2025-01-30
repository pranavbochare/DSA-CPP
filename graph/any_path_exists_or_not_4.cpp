#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
int v;
void addEdge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir==true){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);       // mark visited
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result==true) return true;
        }
    }
    return false;
}

bool anypath(int src,int dest){
    return dfs(src,dest);
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
    int src,dest;
    cin>>src>>dest;
    cout<<anypath(src,dest);
}