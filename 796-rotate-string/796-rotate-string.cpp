class Solution {
public:
    bool rotateString(string s, string goal)
    {
        string x=s;
         for(int i=0;i<s.size();i++)
         {
             char y=s[i];
             x=x.substr(1,s.size()-1);
             x=x+y;
             if(x==goal)
                 return true;
         }
        return false;
    }
};