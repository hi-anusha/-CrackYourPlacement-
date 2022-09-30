class Solution {
public:
    
    void dfs(int i,vector<int> adj[],vector<int>& vis)
    {
        vis[i]=1;
        for(auto j:adj[i])
        {
            if(!vis[j])
                dfs(j,adj,vis);
        }
    }   
    
    int findCircleNum(vector<vector<int>>& isConnected)
    {
        int c=0;
        vector<int> adj[isConnected.size()];
        int n=isConnected.size();
        vector<int> vis(n+1,0);
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j); 
                    adj[j].push_back(i); 
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,adj,vis);
                
            }
        }
        
        return c;
    }
};