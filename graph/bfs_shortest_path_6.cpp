#include<iostream>
#include<vector>
#include<list>
#include<climits>
#include<queue>
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

void bfs(int src,vector<int>&dist){
    queue<int> q;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0;
    visited.insert(src);
    q.push(src);
    while(q.size()!=0){
        int curr=q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(not visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;
            }
        }
    }
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
    int src;
    cin>>src;
    vector<int> dist;
    bfs(src,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
}