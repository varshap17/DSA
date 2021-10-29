#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    bool cycle(int node,vector<int> &visited,vector<int> &restack,vector<int> adj[])
    {
        if(visited[node]==0)
        {
            visited[node]=1;
            restack[node]=1;
            for(auto i:adj[node])
            {
                if(!visited[i] && cycle(i,visited,restack,adj))
                {
                    return true;
                }
                else if(restack[i])
                {
                    return true;
                }
            }
        }
        restack[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> visited(V,0);
        vector<int> restack(V,0);
        for(int i=0;i<V;i++)
        {
            if(cycle(i,visited,restack,adj))
            {
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
