class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        int s1l=s1.size();
        int s2l=s2.size();
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        
        int i=0;
        int j=0;
        
        for(char c : s1)
        {
            v1[c-'a']++;
        }
        
        while(j<s2l)
        {
            v2[s2[j]-'a']++;
        
            if(j-i+1==s1l)
            {
               if(v1==v2)
                return true; 
            }
            
            if(j-i+1<s1l)
              {
                 j++;
              }
               
              else
               {
                   v2[s2[i]-'a']--;
                   i++;
                   j++;
               }
        }
               
               return false;  
    }
};