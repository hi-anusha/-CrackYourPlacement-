class Solution 
{
public:
    
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &mat, int delrow[], int delcol[]) 
    {
        vis[row][col] = 1; 
        int n = mat.size();
        int m = mat[0].size();
      
        for(int i = 0;i<4;i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i]; 
            // check for valid coordinates and unvisited Os
            if(nrow >=0 && nrow <n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && mat[nrow][ncol] == 1) 
            {
                dfs(nrow, ncol, vis, mat, delrow, delcol); 
            }
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
          int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, 1, 0, -1};
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        for(int j=0;j<m;j++)
        {
           
                if(vis[0][j]==0 && grid[0][j]==1)
                    dfs(0, j, vis, grid, delrow, delcol); 
            
                if(!vis[n-1][j] && grid[n-1][j]==1) 
                {
                    dfs(n-1,j,vis,grid, delrow, delcol); 
                 }
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i][0]==0 && grid[i][0]==1)
                    dfs(i, 0, vis, grid, delrow, delcol); 
            
                if(!vis[i][m-1] && grid[i][m-1]==1) 
                {
                    dfs(i,m-1,vis,grid, delrow, delcol); 
                 }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                {
                    cout<<i<<" "<<j<<" "<<vis[i][j]<<"\n";
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};