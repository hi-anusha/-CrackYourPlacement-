class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int s=0;
        int e=0;
        int maxi=0;
        int c=0; 
        while(e<nums.size())
        {
            if(nums[e]==0)
                c++;
            
            if(c>k)
            {
                while(c>k)
                {
                    if(nums[s]==0)
                    {
                        c--;
                    }
                    
                    s++;
                        
                }
            }
            
            maxi=max(maxi,e-s+1);
            e++;
        }
        
        return maxi;
    }
};