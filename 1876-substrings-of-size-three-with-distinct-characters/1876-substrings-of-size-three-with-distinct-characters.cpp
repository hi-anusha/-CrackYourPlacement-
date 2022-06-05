class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0;
        int r=0;
        int maxi=0;
        map<char,int> mp;
        int c=0;
        while(r<s.size())
        {
            if(mp.find(s[r]) == mp.end())  //does not exists
            {
                mp[s[r]]++;
                if(mp.size()>=3)
                    c++;
                r++;
            }
            else                          //exists
            {
                mp.erase(s[l]);
                l++;
            }
        }
        return c;
    }
};