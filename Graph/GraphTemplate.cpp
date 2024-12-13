#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
  
  public:
  unordered_map<T, list< pair<T, int> > > adjacencyList;
  
  void addEdge(T u, T v, int w, bool direction){
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
	Graph<char> g;
	
	int nodes, edges;
	cin>>nodes>>edges;
	
	for(int i=0; i<edges; i++){
	    char u, v;
	    int w; 
	    bool direction;
	    cin>>u>>v;
	    cin>>w;
	    cin>>direction;
	    
	    g.addEdge(u, v, w, direction);
	}
	
	g.printAdjacencyList();

}
