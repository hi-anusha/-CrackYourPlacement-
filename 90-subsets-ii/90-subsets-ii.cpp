
class Solution {
public:
    
    vector<vector<int>> v;
    set<vector<int>> s;
    vector<int> ds;
    void f(int ind,vector<int>& a)
    {
        if(a.size()==ind)
        {
            s.insert(ds);
            return;
        }
        
        ds.push_back(a[ind]);
        f(ind+1,a);
        ds.pop_back();
        
        f(ind+1,a);
        
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        f(0,nums); 
        for(auto i : s)
        {
            v.push_back(i);
        }
        return v;
    }
};