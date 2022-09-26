class Solution {
public:
    
    int f(vector<int>& nums,int ind,vector<int>& dp)
    {
        int pick=0,dpp=0;
        
        if(ind<0)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
       
        pick=nums[ind]+f(nums,ind-2,dp);
       
         dpp=0+f(nums,ind-1,dp);
        return dp[ind]=max(pick,dpp);
    }
    
    int rob(vector<int>& nums) 
    {
        vector<int> dp(nums.size()+1,-1);
        dp[0]=nums[0];
        return f(nums,nums.size()-1,dp);
        
    }
};