#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void addEdge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir==true){
        graph[dest].push_back(src);
    }
}

void dfs(int curr,int end,vector<int>& path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
    }
    visited.insert(curr);       // mark visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void allpath(int src,int dest){
    vector<int> v;
    dfs(src,dest,v);
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
    allpath(src,dest);
    for(auto path: result){
        for(auto ele : path){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}