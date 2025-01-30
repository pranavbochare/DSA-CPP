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

bool dfs(int src,int parent,unordered_set<int> &visited){
    visited.insert(src);
    for(auto neighbor : graph[src]){
        if(visited.count(neighbor) && neighbor!=parent){
            // cycle detected
            return true;
        }
        if(not visited.count(neighbor)){
            bool res=dfs(neighbor,src,visited);
            if(res==true) return true;
        }
    }
    return false;
}

bool has_cycle(){
    unordered_set<int> visited;
    bool result=false;
    for(int i=0;i<v;i++){
        if(not visited.count(i)){
            result=dfs(i,-1,visited);
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