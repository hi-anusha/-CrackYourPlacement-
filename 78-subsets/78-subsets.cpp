class Solution {
public:
    
    vector<int> ds;
    vector<vector<int>> v;
    void f(int ind,vector<int>& nums)
    {
        if(nums.size()==ind)
        {
            v.push_back(ds);
            return;
        }
        
        ds.push_back(nums[ind]);
        f(ind+1,nums);
        ds.pop_back();
        f(ind+1,nums);
    }
    
    vector<vector<int>> subsets(vector<int>& nums)
    {
        f(0,nums);  
        return v;
    }
};