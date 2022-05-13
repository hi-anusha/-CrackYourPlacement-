class Solution {
public:
      
    vector<vector<int>> v;
    vector<int> ds;
    void f(int ind,vector<int>& nums)
    {
        
        v.push_back(ds);
           
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1])
                continue;
            
             ds.push_back(nums[i]);
             f(i+1,nums);
             ds.pop_back();
             
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        f(0,nums);
        return v;
    }
};