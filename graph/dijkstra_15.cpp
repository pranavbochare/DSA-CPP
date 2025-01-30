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

unordered_map<int,int> dikjstra(int src,int v){   // O(vlogv + elogv)
    priority_queue<pp,vector<pp>,greater<pp>> pq;   // {wt,node}
    vector<int> via(v+1);
    unordered_set<int> visited;
    unordered_map<int,int> map;
    for(int i=0;i<v;i++){          // O(v)
        map[i]=INT_MAX;
    }
    pq.push({0,src});
    map[src]=0;
    while(pq.size()>0){             // O((v+e)*lagv)
        pp curr=pq.top();
        if(visited.count(curr.second)){
            pq.pop();
            continue;
        }
        visited.insert(curr.second);
        pq.pop();
        for(auto neighbor : graph[curr.second]){
            if(not visited.count(neighbor.first) && map[neighbor.first]>map[curr.second]+neighbor.second){
                pq.push({map[curr.second]+neighbor.second,neighbor.first});
                via[neighbor.second]=curr.second;
                map[neighbor.first]=map[curr.second]+neighbor.second;
            }
        }
    }
    return map;
}
int main()
{
    int v,e;
    cin>>v>>e;
    graph.resize(v,list< pp > ());
    while(e--){
        int u,v,wt;
        cin>>u>>v>>wt;
        addEdge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> sp=dikjstra(src,v);
    int dest;
    cin>>dest;
    cout<<sp[dest]<<endl<<endl;
    for(auto x : sp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}