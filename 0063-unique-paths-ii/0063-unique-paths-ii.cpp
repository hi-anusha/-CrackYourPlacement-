class Solution {
public:
    int f(int x,int y,int m,int n,vector<vector<int>>& obstacleGrid,vector<vector<int>> &dp)
    {
        if(dp[x][y]!=-1)
            return dp[x][y];
          if(obstacleGrid[m-1][n-1]==1 )
                 return dp[m-1][n-1]=0;
           if(x==m-1 && y==n-1)
                return dp[m-1][n-1]=1;;
      
        if(x>=m || y>=n || obstacleGrid[x][y]==1)
            return dp[x][y]=0;
        
         return dp[x][y]=f(x+1,y,m,n,obstacleGrid,dp)+f(x,y+1,m,n,obstacleGrid,dp);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int m=obstacleGrid.size();
       
        int n=obstacleGrid[0].size();
          vector<vector<int>> dp( m+1 , vector<int> (n+1,-1)); 
         return dp[m-1][n-1]=f(0,0,m,n,obstacleGrid,dp);
    }
};