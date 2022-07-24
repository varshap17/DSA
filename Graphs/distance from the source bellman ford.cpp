class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        vector<int> dist(V,1e8);
       dist[S]=0;
       for(int i=0;i<V-1;i++){
           for(auto x : adj)
           {
               int a=x[0];
               int b=x[1];
               int c=x[2];
               if(dist[a]+c<dist[b]){
                   dist[b]=dist[a]+c;
               }
           }
       }
       return dist;
    }
};
