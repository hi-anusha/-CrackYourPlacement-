class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int l=0;
        int h=nums.size()-1;
        int fi=-1,li=-1;
        vector<int> v;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                fi=mid;
                h=mid-1;
                continue;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        
        l=0;
        h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                li=mid;
                l=mid+1;
                cout<<li;
                continue;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        
        v.push_back(fi);
        v.push_back(li);
        
        return v;
    }
};