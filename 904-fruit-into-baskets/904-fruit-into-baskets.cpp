class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int k=2;
        int i=0,j=0;
        unordered_map<int,int> mp;
        int maxi=0;
       int n=fruits.size();
        while(j<fruits.size())
        {
            mp[fruits[j]]++;
            if(mp.size()<k)
            {
                j++;
            }
            
            else if(mp.size()==k)
            {
                maxi=max(maxi,j-i+1);
                j++;
            }
            
            else
            {
                while(mp.size()>k)
                {
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)
                    {
                        mp.erase(fruits[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        if(mp.size()==1)
        {
            maxi=std::max(maxi,n);
        }
        
        return maxi;
    }
};