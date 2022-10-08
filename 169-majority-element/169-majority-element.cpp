class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ai=0;
        int c=1;
        int x=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[ai])
                c++;
            else
                c--;
            if(c==0)
            {
                ai=i;
                c=1;
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[ai])
               x++;
        }
               
        if(x>nums.size()/2)
               return nums[ai];
              return -1;
    }
};