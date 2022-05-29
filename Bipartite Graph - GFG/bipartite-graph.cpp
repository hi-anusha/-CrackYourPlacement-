// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool bfs(int src, vector<int>adj[],vector<int> &col)
    {
        queue<int> q;
	    q.push(src);
	    col[src]=0;
	    
	    while(!q.empty())
	    {
	        int curr=q.front();
	        q.pop();
	        for(int a:adj[curr])
	        {
	            if(col[a]==-1)
	            {
	                q.push(a);
    	            col[a]=1^col[curr];
	            }
	            if(col[a]==col[curr])
	            return false;
	        }
	    }
	    return true;
	    
    }

	bool isBipartite(int V, vector<int>adj[])
	{
        vector<int> col(V,-1);
	    bool ans=true;
	    for(int i=0;i<V;i++)
	    {
	        if(col[i]==-1)
	        {
	            ans=ans&bfs(i,adj,col);
	        }
	    }
	    return ans;
    }

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends