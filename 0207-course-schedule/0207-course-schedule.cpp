class Solution {
public:
     bool helper(int node,vector<int> adj[],vector<int>& vis,vector<int> &dfs)
    {
        vis[node]=1;
        dfs[node]=1;
        for(auto j:adj[node])
        {
            if(!vis[j])
            {
                if(helper(j,adj,vis,dfs)==true)
                    return true;
            }
                
            else if(dfs[j])
                return true;
        }
        
        dfs[node]=0;
        return false;
     }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[numCourses];
        int n=numCourses;
        
        
        for(auto it: prerequisites)
        {
             adj[it[1]].push_back(it[0]);
        }
        
        vector<int> vis(n+1,0);
        vector<int> dfs(n+1,0);
        for (int i = 0; i < n; i++) {
        if (!vis[i]) {
 
          if (helper(i, adj, vis, dfs)==true) {
            return false;
          }
        }
      }
      return true;
    }
};