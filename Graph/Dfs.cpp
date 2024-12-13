#include <bits/stdc++.h>
using namespace std;

class Graph{
  public:
  unordered_map<int, list<int> > adjList;
  
  void addEdge(int u, int v, bool direction){
      adjList[u].push_back(v);
      if(direction == 0){
          adjList[v].push_back(u);
      }
  }
  
 
 void bfs(int src, vector<bool>& visited){
    queue<int> q;
    q.push(src);
    visited[src] = 1;
    
    while(!q.empty()){
        int fNode = q.front();
        q.pop();
        cout<<fNode<<" ";
        
        for(auto nbr: adjList[fNode]){
            if(!visited[nbr]){
                visited[nbr] = 1;
                q.push(nbr);
            }
        }
    }
 }
  
 
};


int main(){
    Graph g;
    int n, e;
    cin>>n>>e;
    
    for(int i=0; i<e; i++){
        int u, v;
        cin>>u>>v;
        
        bool direction;
        cin>>direction;
        
        g.addEdge(u, v, direction);
        
    }
    
    // g.printAdj();
    vector<bool> visited(n, 0);
    
    g.bfs(0, visited);
    
    
}