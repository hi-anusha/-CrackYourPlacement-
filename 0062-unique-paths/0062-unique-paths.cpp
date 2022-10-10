class Solution {
public:
    
    int f(int x,int y,int m,int n,vector<vector<int>> &dp)
    {
        if(dp[x][y]!=-1)
            return dp[x][y];
       
        if(x>=m || y>=n)
            return dp[x][y]=0;
         if(x==m-1 && y==n-1)
            return dp[m][n]=1;
        return dp[x][y]=f(x+1,y,m,n,dp)+f(x,y+1,m,n,dp);
    }
    
    int uniquePaths(int m, int n) 
    {
       vector<vector<int> > dp(m+1,vector<int>(n+1,-1));
        
        return f(0,0,m,n,dp);
    }
};