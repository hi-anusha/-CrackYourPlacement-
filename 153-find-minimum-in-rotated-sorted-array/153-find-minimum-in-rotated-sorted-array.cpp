class Solution 
{
public:
    int findMin(vector<int>& nums) 
    {
        int l=0;
        int h=nums.size()-1;
        int mid;
        while(l<h)
        {
            mid=l+(h-l)/2;
            
            if(nums[mid]>nums[h])
            {
                l=mid+1;
                cout<<nums[l]<<" ";
            }
            else
            {
                h=mid;
            }
        }
        
        return nums[l];
    }
};