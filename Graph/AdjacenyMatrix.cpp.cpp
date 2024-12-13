#include <bits/stdc++.h>
using namespace std;

int main() {
	int nodes, edges;
	cin>>nodes >> edges;
	
	vector<vector<int> > adjacenyMatrix (nodes, vector<int> (nodes, 0));
	
	for(int i=0; i<edges; i++){
	    int u, v;
	    cin>>u>>v;
	    
	    adjacenyMatrix[u][v] = 1;
	    // adjacenyMatrix[v][u] = 1; --> undirected remove the comment
	}
	
	// printing the adjacenyMatrix
	for(int i=0; i<adjacenyMatrix.size(); i++){
	    for(int j=0; j<adjacenyMatrix[i].size(); j++){
	        cout<<adjacenyMatrix[i][j]<<" ";
	    }
	    cout<<endl;
	}

}
