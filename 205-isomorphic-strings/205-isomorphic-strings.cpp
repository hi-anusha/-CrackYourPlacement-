class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        
        if(s.size()!=t.size())
            return false;
        
        vector<char> v1(256,0);
        vector<char> v2(256,0);
        
        for(int i=0;i<s.size();i++)
        {
            if(v1[s[i]]==0 && v2[t[i]]==0)
            {
                v1[s[i]]=t[i];
                v2[t[i]]=t[i];
            }
            else
            {
                if(v1[s[i]]!=t[i])
                    return false;
            }
            
        }
        
        return true;
        
    }
};