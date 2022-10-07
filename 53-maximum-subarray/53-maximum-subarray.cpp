class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ms=INT_MIN;
        int s=0;
        
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            if(s>ms)
            {
                ms=s;
            }
            if(s<0)
                s=0;
        }
        
        return ms;
    }
};