#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;
void addEdge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir==true){
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}

bool bfs(int src){
    unordered_set<int> visited;
    queue<int> q;
    vector<int> parent(v,-1);
    q.push(src);
    visited.insert(src);
    while(q.size()>0){
        int curr=q.front();
        q.pop();
        for(auto neighbor: graph[curr]){
            if(visited.count(neighbor) && neighbor!=parent[curr]) return true;
            if(not visited.count(neighbor)){
                visited.insert(neighbor);
                parent[neighbor]=curr;
                q.push(neighbor);
            }
        }
    }
}

bool has_cycle(){
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(not visited.count(i)){
            bool result=bfs(i);
            if(result==true) return true;
        }
    }
    return false;
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
    display();
    cout<<endl;
    cout<<has_cycle();
}