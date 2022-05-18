class Solution {
public:
    
    static bool cmp(pair<int,int> a, pair<int,int> b)
    {
        if(a.first<b.first)
            return true;
        if(a.first==b.first)
        {
            return (a.second>b.second);
        }
        return false;
    }
    
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(int i=0;i<nums.size();i++)  //n
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> v;
        
        for(auto i: mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        vector<int> ans;
        
        for(int i=0;i<v.size();i++)
        {
           while(v[i].first--)
           {
               ans.push_back(v[i].second);
           }
        }
    
        return ans;
        
    }
};