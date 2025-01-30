#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;

void addEdge(int a,int b,bool bidir=true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}

void topoBfs(){      // kahns algo
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighbor : graph[i]){
            indegree[neighbor]++;
        }
    }
    queue<int> q;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            visited.insert(i);
        }
    }

    while(q.size()>0){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(auto neighbor : graph[node]){
            indegree[neighbor]--;
            if(indegree[neighbor]==0){
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
}
int main()
{
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int>());
    while(e--){
        int x,y;
        cin>>x>>y;
        addEdge(x,y,false);
    }
    topoBfs();
}