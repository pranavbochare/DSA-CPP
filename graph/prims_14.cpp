#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
vector<list<pp>> graph;

void addEdge(int u,int v,int wt,bool bidir=true){
    graph[u].push_back({v,wt});
    if(bidir){
        graph[v].push_back({u,wt});
    }
}

int prims(int src,int v){
    priority_queue<pp,vector<pp>,greater<pp>> pq;   // {wt,node}
    vector<int> parent(v+1);
    unordered_set<int> visited;
    unordered_map<int,int> map;
    for(int i=1;i<=v;i++){
        map[i]=INT_MAX;
    }
    pq.push({0,src});
    map[src]=0;
    int total_count=0;   // 0  -> n-1
    int result=0;   // sum of weight
    while(total_count<v && pq.size()>0){
        pp curr=pq.top();
        if(visited.count(curr.second)){
            pq.pop();
            continue;
        }
        visited.insert(curr.second);
        total_count++;
        result+=curr.first;
        pq.pop();
        for(auto neighbor : graph[curr.second]){
            if(not visited.count(neighbor.first) && map[neighbor.first]>neighbor.second){
                pq.push({neighbor.second,neighbor.first});
                parent[neighbor.second]=curr.second;
                map[neighbor.first]=neighbor.second;
            }
        }
    }
    return result;
}
int main()
{
    int v,e;
    cin>>v>>e;
    graph.resize(v+1,list< pp > ());
    while(e--){
        int u,v,wt;
        cin>>u>>v>>wt;
        addEdge(u,v,wt);
    }
    int src;
    cin>>src;
    cout<<prims(src,v);
}