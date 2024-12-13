#include <bits/stdc++.h>
using namespace std;

class Graph{
  
  public:
  unordered_map<int, list< pair<int, int> > > adjacencyList;
  
  void addEdge(int u, int v, int w, int direction){
      adjacencyList[u].push_back({v, w});
      
      if(direction == 1){
        adjacencyList[v].push_back({u, w});
      }
  }
  
  void printAdjacencyList(){
    for (auto node : adjacencyList) {
           
        cout << node.first <<"-->";
        
        for(auto nbr:node.second){
            cout<<nbr.first<<"-"<<nbr.second<<" ";
        }
        cout<<endl;
  }
  }
    
};

int main() {
	Graph g;
	
	int nodes, edges;
	cin>>nodes>>edges;
	
	for(int i=0; i<edges; i++){
	    int u, v, w, direction;
	    cin>>u>>v>>w>>direction;
	    
	    g.addEdge(u, v, w, direction);
	}
	
	g.printAdjacencyList();

}
