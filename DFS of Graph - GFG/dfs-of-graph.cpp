// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfss(int node,vector<int> adj[],vector<int> &dfs,vector<int> &v)
    {
        dfs.push_back(node);
        v[node]=1;
        for(auto j:adj[node])
        {
            if(!v[j])
              dfss(j,adj,dfs,v);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> dfs;
        vector<int> v(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!v[i])
            {
                dfss(i,adj,dfs,v);
            }
        }
        return dfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends