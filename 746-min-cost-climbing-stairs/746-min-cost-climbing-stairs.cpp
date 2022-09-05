class Solution
{
public:
    
    int f1(int n,vector<int>& cost,vector<int>& dp)
    {
        if(n==cost.size())
        {
            return 0;
        }
        
        if(dp[n]!=-1)
            return dp[n];
        
        int left=f1(n+1,cost,dp)+abs(cost[n]);
        int right=INT_MAX;
        if(n<cost.size()-1)
        {
            right=f1(n+2,cost,dp)+abs(cost[n]);
        }
        return dp[n]= min(left,right);
    }
    
       int f2(int n,vector<int>& cost,vector<int>& dp)
    {
        if(n==cost.size())
        {
            return 0;
        }
         
           if(dp[n]!=-1)
            return dp[n];
        
           
        int left=f2(n+1,cost,dp)+abs(cost[n]);
        int right=INT_MAX;
        if(n<cost.size()-1)
        {
            right=f2(n+2,cost,dp)+abs(cost[n]);
        }
        
           return dp[n]= min(left,right);
    }
    
    int minCostClimbingStairs(vector<int>& cost) 
    {
        vector<int> dp(cost.size(),-1);
        int x=f1(0,cost,dp);
        int y=f2(1,cost,dp);
        
        return min(x,y);
    }
};