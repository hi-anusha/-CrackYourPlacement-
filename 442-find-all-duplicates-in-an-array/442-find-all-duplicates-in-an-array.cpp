class Solution 
{
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> ans;
        vector<int> v(n+1, 0);
        cout<<v.size()<<" ";
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>1)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};