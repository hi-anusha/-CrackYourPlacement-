class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
          int l=0;
        int h=nums.size()-2;
        
        while(l<=h)
        {
            int m=l+(h-l)/2;
            
            if(nums[m]==nums[m^1])
                l=m+1;
            else
                h=m-1;
        }
        
        return nums[l];
    }
};