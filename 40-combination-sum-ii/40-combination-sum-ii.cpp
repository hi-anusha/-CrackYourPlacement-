class Solution {
public:
    
    vector<vector<int>> v;
    vector<int> ds;
    void f(int ind,int t,vector<int>& arr)
    {
        if(t==0)
        {
            v.push_back(ds);
            return;
        }
        
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1])
                continue;
            if(arr[i]>t)
                break;
           
                ds.push_back(arr[i]);
                f(i+1,t-arr[i],arr);
                ds.pop_back();
            
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(),candidates.end());
        f(0,target,candidates);   
        return v;
    }
};