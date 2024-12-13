#include <bits/stdc++.h>
using namespace std;

class Graph{
  public:
    unordered_map<int, list<int> > adjacencyList;
    
    void addEdge(int u, int v, int direction){
        // direction: 0 ==> undirected
	    // direction: 1 ==> directed
	    
	    adjacencyList[u].push_back(v);
	    
	    if(direction == 0){
	        adjacencyList[v].push_back(u);
	    }
    }
    
   void printAdjacencyList(){
       for(pair<int, list<int> > node: adjacencyList){
           cout<<node.first<<"-->";
           for(int ele: node.second ){
               cout<<ele<<" ";
           }
       cout<<endl;
       }
   }
    
    
};

int main() {
	int nodes, edges;
	cin>>nodes>>edges;
	
	Graph g;
	
	for(int i=0; i<edges; i++){
	    int u, v, direction;
	    cin>>u>>v>>direction;
	    
	    g.addEdge(u, v, 0);
	    
	}
	
	g.printAdjacencyList();
	


}