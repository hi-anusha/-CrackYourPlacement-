class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        unordered_map<int,int> mp1;
        for(auto i:mp)
        {
            if(mp1[i.second])
            {
                return false;
            }
            else
            {
                mp1[i.second]++;
            }
        }
        
        return true;
        
    }
};